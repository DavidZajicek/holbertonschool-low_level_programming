#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 * Return: 0
 */
int print_numbers(void)
{
	char num;

	for (num = '0' ; num <= '9' ; num++)
	{
		_putchar(num);
	}
	_putchar('\n');

	return (0);
}
