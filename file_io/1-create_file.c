#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>

/**
 * create_file - create file
 * @filename: file to read
 * @text_content: content to add
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	len = strlen(text_content);
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_TRUNC, 0500);
	if (fd == -1)
	{
		return (-1);
	}

	write(fd, text_content, len);
	close(fd);
	return (1);
}
