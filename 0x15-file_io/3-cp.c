#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - function that copies content of a file to another.
 * @argc: number of arguments.
 * @argv: arguments of the function main.
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	int n_read, n_write, source_file, dest_file;
	int n_close1, n_close2;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97); }
	source_file = open(argv[1], O_RDONLY);
	if (source_file == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	n_read = BUFFER_SIZE;
	while (n_read == BUFFER_SIZE)
	{
		n_read = read(source_file, buffer, BUFFER_SIZE);
		if (n_read == -1)
		{ dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		n_write = write(dest_file, buffer, BUFFER_SIZE);
		if (n_write == -1 || dest_file == -1)
		{ dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	n_write = write(dest_file, buffer, n_read);
	n_close1 = close(source_file);
	n_close2 = close(dest_file);
	if (n_close1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", source_file);
		exit(100);
	}
	if (n_close2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", dest_file);
		exit(100);
	}
	return (0);
}
