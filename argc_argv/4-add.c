#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * digits_only - check for numbers
 * @s: string to check
 * Return: 0 if only numbers, 1 if non-num found
 */
int digits_only(char *s)
{
	while (*s)
	{
		if (isdigit(*s++) == 0)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - adds the given args
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int i = 1;

	while (i < argc)
	{
		if (digits_only(argv[i]))
		{
			count += atoi(argv[i]);
		}
		else
		{
			puts("Error");
			return (1);
		}
		i++;
	}
	printf("%d\n", count);

	return (0);
}
