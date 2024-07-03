#include <stdio.h>

/**
 * main - prints the program's name
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	puts(argv[argc - 1]);

	return (0);
}
