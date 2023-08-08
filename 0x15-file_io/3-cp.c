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
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_file = open(argv[1], O_RDONLY);
	n_read = read(source_file, buffer, BUFFER_SIZE);
	if (n_read == -1 || source_file == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (n_read == BUFFER_SIZE)
	{
		n_write = write(dest_file, buffer, BUFFER_SIZE);
		if (n_write == -1 || dest_file == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		n_read = read(source_file, buffer, BUFFER_SIZE);
	}
	n_write = write(dest_file, buffer, n_read);
	close(source_file);
	close(dest_file);
	return (0);
}
