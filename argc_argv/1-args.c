#include <stdio.h>

/**
 * main - prints the number of args passed into program
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
