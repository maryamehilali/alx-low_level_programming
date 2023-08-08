#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - function that a textfile and prints it to stdout.
 * @filename: textfile to read.
 * @letters: number of bytes to read.
 * Return: number of bytes read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buffer;
	ssize_t n_byteread, n_bytewrite;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if(buffer == NULL)
		return (0);
	n_byteread = read(fd, buffer, letters);
	if (n_byteread == -1)
		return (0);
	n_bytewrite = write(STDOUT_FILENO, buffer, n_byteread);
	if (n_bytewrite == -1 || n_bytewrite < n_byteread)
		return (0);
	free(buffer);
	close(fd);
	return (n_bytewrite);
}
