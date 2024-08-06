#include <sys/file.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void err_exit(char *format, int err_no)
{
	write(STDERR_FILENO, format, strlen(format));
	exit(err_no);
}

/**
 * close_fd - close fd
 * @fd: fd to close
 * Return: void
 */
void close_fd(int fd)
{
	int close_err;
	close_err = close(fd);
	if (close_err == -1)
	{
		err_exit("Error: Can't close fd %s\n", fd);
	}
}


void copy_contents(int fd1, int fd2, char *buf)
{
	int bytes_read, bytes_wrote;

	while ((bytes_read = read(fd1, buf, sizeof(buf))))
	{
		if (bytes_read == -1)
		{
			close_fd(fd1);
			close_fd(fd2);
			err_exit("Error: Can't read from file \n", 98);
		}
		bytes_wrote = write(fd2, buf, sizeof(buf));
		if (bytes_wrote == -1)
		{
			close_fd(fd1);
			close_fd(fd2);
			err_exit("Error: Can't write to %s\n", 99);
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
		err_exit("Usage: cp file_from file_to\n", 97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		err_exit("Error: Can't read from file \n", 98);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		close_fd(fd1);
		err_exit("Error: Can't write to \n", 99);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		close_fd(fd1);
		close_fd(fd2);
		return (-1);
	}

	copy_contents(fd1, fd2, buf);

	close_fd(fd1);
	close_fd(fd2);
	free(buf);
	return (1);
}
