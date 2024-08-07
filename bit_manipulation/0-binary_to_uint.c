#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - binary to unsigned int
 * @b: binary to convert
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0, pow = 1;
	int j = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '1' || b[i] == '0')
			i++;
		else
			return (0);
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] == '1')
			result += pow;
		pow *= 2;
	}
	return (result);
}
