#include <sys/file.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * close_fd - close fd
 * @fd: fd to close
 * @fn: filename
 * Return: void
 */
void close_fd(int fd, char *fn)
{
	int close_err;

	close_err = close(fd);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %s\n", fn);
		exit(100);
	}
}

/**
 * copy_contents - copy
 * @fd1: fd1
 * @fd2: fd2
 * @buf: buf
 * @fn1: fn1
 * @fn2: fn2
 * Return: void
 */
void copy_contents(int fd1, int fd2, char *buf, char *fn1, char *fn2)
{
	int bytes_read, bytes_wrote;

	while ((bytes_read = read(fd1, buf, 1024)))
	{
		if (bytes_read == -1)
		{
			close_fd(fd1, fn1);
			close_fd(fd2, fn2);
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", fn1);
			exit(98);
		}
		bytes_wrote = write(fd2, buf, bytes_read);
		if (bytes_wrote == -1)
		{
			close_fd(fd1, fn1);
			close_fd(fd2, fn2);
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", fn2);
			exit(99);
		}
	}
}

/**
 * main - adds the given args
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		close_fd(fd1, argv[1]);
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buf = malloc(sizeof(char) * 1025);
	if (buf == NULL)
	{
		close_fd(fd1, argv[1]);
		close_fd(fd2, argv[2]);
		return (-1);
	}

	copy_contents(fd1, fd2, buf, argv[1], argv[2]);

	close_fd(fd1, argv[1]);
	close_fd(fd2, argv[2]);
	free(buf);
	return (0);
}
