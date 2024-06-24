#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9, excluding 2 and 4
 * Return: 0
 */
int print_most_numbers(void)
{
	char num;

	for (num = '0' ; num <= '9' ; num++)
	{
		if (num == '2' || num == '4')
			continue;
		_putchar(num);
	}
	_putchar('\n');

	return (0);
}
