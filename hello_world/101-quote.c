#include <stdio.h>
#include <string.h>

/**
 * main - printf text into standard error
 * Return: returns 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(char), strlen(str), stderr);
	return (1);
}
