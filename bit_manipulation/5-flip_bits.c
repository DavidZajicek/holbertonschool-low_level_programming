#include "main.h"

/**
 * flip_bits - flip bits and return the amount of bits flipped
 * @n: number 1
 * @m: number 2
 * Return: bit diff
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor != 0)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
