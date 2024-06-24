#include "main.h"

/**
 * print_square - print a square
 * @size: the size of the square to print
 * Return: 0
 */
int print_square(int size)
{
	int i, j;

	for (i = 1 ; i <= size ; i++)
	{
		for (j = 1 ; j <= size ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');

	return (0);
}
