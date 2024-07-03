#include <stdio.h>

/**
 * main - prints args passed into program
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		puts(*argv++);
	}
	return (0);
}
