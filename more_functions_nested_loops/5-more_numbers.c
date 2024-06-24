#include "main.h"

/**
 * more_numbers - print numbers 0 to 14 10 times, each on a new line
 * Return: 0
 */
int more_numbers(void)
{
	int i, n, c;

	for (n = 1 ; n <= 10 ; n++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			c = i;

			if (c > 9)
			{
				_putchar(49);
				c = (c % 10);
			}
			_putchar(48 + c);
		}
		_putchar('\n');
	}
	return (0);
}
