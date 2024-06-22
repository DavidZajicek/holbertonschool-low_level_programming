#include "main.h"

/**
 * print_to_98 - print form given int to 98
 * @n: number to start at
 * Return: 0
 */
int print_to_98(int n)
{
	static int m = 98;
	int i = n;

	while (i != m)
	{
		if (i <= -100)
		{
			_putchar('0' + (i / 100));
			i = i % 100;
		}
		if ((i >= 10) || (i <= -10))
			_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
		if (i < m)
			i++;
		else
			i--;
	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
	return (0);
}
