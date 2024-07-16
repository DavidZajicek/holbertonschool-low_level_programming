#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: separator
 * @count: count
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int count, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, count);

	for (i = 0; i < count; i++)
	{
		printf("%d", va_arg(args, int));
		if (i + 1 != count && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
