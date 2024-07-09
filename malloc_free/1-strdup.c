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
 * _strdup - create an array
 * @str: string to create
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *result;
	unsigned int i = walk_string(str), j = 0;

	if (str == NULL)
		return (NULL);

	result = malloc(sizeof(char) * i);

	if (result == NULL)
		return (NULL);

	while (j <= i)
	{
		result[j] = str[j];
		j++;
	}

	return (result);
}
