#include "main.h"

/**
 * _abs - print absolute value of an int
 * @n: integer value of the given number
 * Return: the absolute value of int
 */
int _abs(int n)
{
	unsigned int i = n;

	if (n < 0)
		i = -i;

	return (i);
}
