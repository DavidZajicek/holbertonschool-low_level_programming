#include "main.h"

/**
 * puts_half - prints the second half of a given string
 * @str: string to print
 * Return: 0
 */
int puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= ((len - 1) / 2);


	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

	return (0);
}
