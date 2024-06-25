#include "main.h"

/**
 * _puts2 - prints the given string to stdout, skipping every second character
 * @str: string to print
 * Return: 0
 */
int _puts2(char *str)
{
	int pos = 0;

	while (*str != '\0')
	{
		if ((pos % 2) == 0)
			_putchar(*str);
		str++;
		pos++;
	}
	_putchar('\n');

	return (0);
}
