#include "main.h"

/**
 * main - entry point
 *
 * Return: On success 0.
 */
int main(void)
{
	int i = 0;
	char *output = "_putchar";

	while (output[i])
	{
		char x = output[i];
		_putchar(x);
		i++;
	}
	_putchar('\n');
	return (0);
}
