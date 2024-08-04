#include "main.h"
#include <stddef.h>

/**
 * get_bit - get bit
 * @n: number
 * @index: bit to get
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
