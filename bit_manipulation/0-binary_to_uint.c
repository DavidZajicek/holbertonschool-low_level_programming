#include "main.h"

/**
 * binary_to_uint - binary to unsigned int
 * @b: binary to convert
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0, pow = 1;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '1' || b[i] != '0')
			return (0);
		i++;
	}
	i--;
	while (i--)
	{
		result += (b[i] - 48) * pow;
		pow *= 2;
	}
	return (result);
}
