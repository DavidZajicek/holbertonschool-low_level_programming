#include "main.h"

/**
 * jack_bauer - print every minute in 24 hours
 *
 * Return: 0
 */
int jack_bauer(void)
{
	int h, m;

	for (h = 0 ; h < 24 ; h++)
	{
		for (m = 0 ; m < 60 ; m++)
		{
			if (h < 10)
				_putchar('0');
			else if (h < 20)
				_putchar('1');
			else
				_putchar('2');
			_putchar('0' + h % 10);
			_putchar(':');

			if (m < 10)
				_putchar('0');
			else if (m < 20)
				_putchar('1');
			else if (m < 30)
				_putchar('2');
			else if (m < 40)
				_putchar('3');
			else if (m < 50)
				_putchar('4');
			else
				_putchar('5');
			_putchar('0' + m % 10);
			_putchar('\n');
		}
	}
	return (0);
}
