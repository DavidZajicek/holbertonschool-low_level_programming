#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print strings
 * @separator: separator
 * @count: count
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int count, ...)
{
	va_list args;
	unsigned int i;
	char *temp;

	va_start(args, count);

	for (i = 0; i < count; i++)
	{
		temp = va_arg(args, char *);
		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);
		if (separator != NULL && i + 1 != count)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
