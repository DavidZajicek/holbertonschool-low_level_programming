#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat two strings
 * @s1: string one
 * @s2: string two
 * @n: amount of bytes of s2 to add to s1
 * Return: pointer to the  the start of s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *result = malloc(sizeof(char) * 20);

	if (result == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1 != '\0')
	{
		result[j] = *s1;
		s1++;
		j++;
	}
	for (i = 0; i < n; i++)
	{
		if (s2[i] == '\0')
			break;
		result[j] = s2[i];
		j++;
	}
	result[j] = '\0';
	return (result);
}
