#include "main.h"
#include <stdlib.h>

/**
 * walk_string - string length
 * @str: string to walk
 * Return: length of string
 */
unsigned int walk_string(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - concat two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int i = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	i = walk_string(s1) + walk_string(s2);

	result = malloc(sizeof(char) * (i + 1));

	if (result == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		result[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		result[i] = *s2;
		s2++;
		i++;
	}

	result[i] = '\0';

	return (result);
}
