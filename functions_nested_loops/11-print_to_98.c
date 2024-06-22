#include "main.h"

/**
 * print_to_98 - print form given int to 98
 * @n: number to start at
 * Return: 0
 */
int print_to_98(int n)
{
	static int m = 98;

	if (n < m)
	{
		for (n ; n <= m ; n++)
		{
			if (n <= -100)
				_putchar('0' + (n / 100));
			if ((n >= 10) || (n <= -10))
				_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		for (n ; n >= m ; n--)
		{
			if (n >= 100)
				_putchar('0' + (n / 100));
			if (n >= 10)
				_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	return (0);
}
