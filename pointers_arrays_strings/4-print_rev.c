#include "main.h"

/**
 * print_rev - prints the given string to stdout in reverse
 * @s: string to print
 * Return: 0
 */
int print_rev(char *s)
{
	int pos = 0;


	while (*s != '\0')
	{
		s++;
		pos++;
	}

	while (pos >= 0)
	{
		s--;
		_putchar(*s);
		pos--;
	}

	_putchar('\n');

	return (0);
}
