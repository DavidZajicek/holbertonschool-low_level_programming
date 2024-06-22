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

	while (n != m)
	{
		if ((n <= -100) || (n >= 100))
		{
			_putchar('0' + (n / 100));
			i = n % 100;
			_putchar('0' + (n / 10));
		}
		else if ((n >= 10) || (n <= -10))
			_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
		if (i < m)
			n++;
		else
			n--;
	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
	return (0);
}
