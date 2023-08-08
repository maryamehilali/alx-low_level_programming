#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - function that appends text at the EOF.
 * @filename: textfile to append to.
 * @text_content: text to write on the file.
 * Return: 1 on success, -1 on fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_byte, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		n_byte = write(fd, text_content, len);
		if (n_byte == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
