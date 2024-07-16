#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers
 * @separator: separator
 * @count: count
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int count, ...)
{
	if (count == 0 || separator == NULL)
		return;

	va_list args;
	unsigned int i = 0;

	va_start(args, count);

	for (i = 0; i < count; i++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("\n");
	va_end(args);
}
