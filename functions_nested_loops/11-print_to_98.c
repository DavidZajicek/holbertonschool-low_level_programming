#include "main.h"

/**
 * print_to_98 - print form given int to 98
 * @n: number to start at
 * Return: 0
 */
int print_to_98(int n)
{
	static int m = 98;
	int i;

	if (n < m)
	{
		for (i = n ; i <= m ; i++)
		{
			if (i <= -100)
				_putchar('0' + (i / 100));
			if ((i >= 10) || (i <= -10))
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		for (i = n ; i >= m ; i--)
		{
			if (i >= 100)
				_putchar('0' + (i / 100));
			if (i >= 10)
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	return (0);
}
