#include "main.h"

/**
 * times_table - print 9 times table starting form 0
 *
 * Return: 0
 */
int times_table(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			_putchar('0' + (i * j));
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}


	return (0);
}
