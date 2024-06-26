#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: the size of the triangle to print
 * Return: 0
 */
int print_triangle(int size)
{
	int i, j, k;

	for (i = 1 ; i <= size ; i++)
	{
		k = size - i;
		j = size - k;

		while (k > 0)
		{
			_putchar(' ');
			k--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');

	return (0);
}
