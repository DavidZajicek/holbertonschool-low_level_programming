#include "main.h"

/**
 * print_to_98 - print form given int to 98
 * @n: number to start at
 * Return: 0
 */
int print_to_98(int n)
{
	static int m = 98;
	int i, d;


	while (n != m)
	{
		i = n;
		d = 10;

		if (n < 0)
		{
			i = -n;
			_putchar('-');
		}

		while (d <= i)
		{
			d *= 10;
		}

		while (d > 1)
		{
			d /= 10;
			_putchar('0' + (i / d));
			i %= d;
		}
		_putchar(',');
		_putchar(' ');

		if (n < m)
			n++;
		else
			n--;
	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
	return (0);
}
