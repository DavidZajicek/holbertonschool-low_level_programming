#include "main.h"

/**
 * print_last_digit - print last digit of given int
 * @n: integer value of the given number
 * Return: the last digit of the int
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i = -i;

	_putchar('0' + i);
	return (i);
}
