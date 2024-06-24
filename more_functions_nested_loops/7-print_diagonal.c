#include "main.h"

/**
 * print_diagonal - print a diagonal line of \
 * @n: the amount of _ to be printed
 * Return: 0
 */
int print_diagonal(int n)
{
	int i, d;

	for (i = 1 ; i <= n ; i++)
	{
		if (i > 1)
			_putchar('\n');
		for (d = 1 ; d < i ; d++)
		{
			_putchar(' ');
		}
		_putchar(92);
	}
	_putchar('\n');

	return (0);
}
