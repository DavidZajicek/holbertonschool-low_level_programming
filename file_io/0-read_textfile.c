#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>

/**
 * read_textfile - read text file
 * @filename: file to read
 * @letters: number of letters to read from file
 * Return: number of letters read or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	if (filename == NULL)
	{
		free(buf);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	n = read(fd, buf, letters);
	if (n == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	write(1, buf, n);
	free(buf);
	close(fd);
	return (n);
}
