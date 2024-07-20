#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_string - string print
 * @s: string
 * Return: void
 */
void print_string(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print all
 * @format: format for args
 * Return: void
 */
void print_all(const char *format, ...)
{
	va_list args;
	int i = 0;
	char *temp;

	va_start(args, format);

	while (format[i] != NULL)
	{
		switch (format[i])
		{
		case ('c'):
			temp = va_arg(args);
			print_string(temp);
			break;
		case ('s'):
			temp = va_arg(args);
			print_string(temp);
			break;
		case ('i'):
			printf("%d", va_arg(args));
			break;
		case ('f'):
			printf("%f", va_arg(args));
			break;
		}
		i++;
		if (format[i + 1] == NULL)
			return;
		printf(", ");
	}
	printf("\n");
}
