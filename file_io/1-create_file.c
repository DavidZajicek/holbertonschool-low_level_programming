#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include <string.h>

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
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		write(fd, "", len);
	else
		write(fd, text_content, len);
	close(fd);
	return (1);
}
