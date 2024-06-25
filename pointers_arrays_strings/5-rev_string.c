#include "main.h"

/**
 * rev_string - returns the given string in reverse
 * @s: string to reverse
 * Return: 0
 */
int rev_string(char *s)
{
	int pos = 0;
	int len = _strlen(s);
	char temp[len];

	while (*s != '\0')
	{
		temp[pos] = *s;
		pos++;
		s++;
	}

	pos--;

	while (pos >= 0)
	{
		*s = temp[pos];
		pos--;
		s--;
	}
	return (0);
}
