#include <stdio.h>

/**
 * _strpbrk - search string of bytes
 * @s: string to test
 * @accept: characters to accept
 * Return: pointer to the byte found in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, found = 0;
	char *match = NULL;

	while (*s != '\0')
	{
		if (found != 0)
			break;
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				match = s;
				found = 1;
				break;
			}
			i++;
		}
		s++;
	}
	return (match);
}
