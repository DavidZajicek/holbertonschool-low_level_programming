#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - create file
 * @filename: file to append
 * @text_content: content to add
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	if (text_content != NULL)
		len = strlen(text_content);
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
		write(fd, text_content, len);
	close(fd);
	return (1);
}
