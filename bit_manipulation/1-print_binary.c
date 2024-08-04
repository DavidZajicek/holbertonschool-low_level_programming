#include "main.h"
#include <stddef.h>

/**
 * print_binary - print binary representation of a number
 * @n: int to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, k, first = 0;

	for (i = 31; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			first = 1;
			_putchar("1");
		}
		else if (first)
		{
			_putchar("0");
		}
	}
	_putchar('\0');
}
