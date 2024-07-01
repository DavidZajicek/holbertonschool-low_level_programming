#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of nums
 * @a: the start of the matrix of ints
 * @size: the size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, k = 1, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += a[((i * size + k) * sizeof(int))];
		i++;
		k++
	}
	i = 0;
	while (i < size)
	{
		sum2 += a[((i * size + k) * sizeof(int))];
		i++;
		k--;
	}
	printf("%d, %d\n", sum1, sum2);
}
