#include <stdio.h>


/**
 * _strchr - find character in string
 * @s: string memory address
 * @c: character to find
 * Return: Pointer to the first occurance of c in string, or NULL
 */
char *_strchr(char *s, char c)
{
	char *result = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			result = s;
			break;
		}
		s++;
	}
	if (c == '\0')
		result = s;
	return (result);
}
