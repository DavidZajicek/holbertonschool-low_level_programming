#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: the array to print from
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, k = 0;

	while (i < 8)
	{
		k = 0;
		while (k < 8)
		{
			_putchar(a[i][k]);
			k++;
		}
		_putchar('\n');
		i++;
	}
}
