#include <stdio.h>

/**
 * _strstr - locate a substring
 * @haystack: string to look inside
 * @needle: substring to find
 * Return: address of the start of the needle if found
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = NULL, **marker = result;
	int i = 0, found = 0;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			*marker = haystack;
			i = 0;
			while (needle[i] != '\0' && haystack[i] != '\0')
			{
				if (haystack[i] != needle[i])
				{
					found = 0;
					break;
				}
				else
				{
					found = 1;
					i++;
				}
			}
			if (found == 1)
			{
				result = *marker;
				break;
			}
		}
		haystack++;
	}
	return (result);
}
