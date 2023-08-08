#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * create_file - function that create afile and write on it.
 * @filename: textfile to creat.
 * @text_content: text to write on the file.
 * Return: 1 on success, -1 on fail.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd;
	ssize_t n_byte;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	if (fd < 0)
		return (-1);
	len = strlen(text_content);
	if (len == 0)
	{
		close(fd);
		return (1);
	}
	n_byte = write(fd, text_content, len);
	if (n_byte == -1 || n_byte != len)
		return (-1);
	close(fd);
	return (1);
}
