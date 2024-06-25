#include <stdio.h>
#include "main.h"

/**
 * print_array - print ints from an array
 * @a: the start of the array given
 * @n: the number of ints to print
 * Return: 0
 */
int print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	_putchar('\n');
	return (0);
}
