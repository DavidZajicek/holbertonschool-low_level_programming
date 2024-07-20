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
	char *temp_s;
	char temp_c;

	va_start(args, format);

	while (format[i] != '\0' || format != NULL)
	{
		switch (format[i])
		{
		case ('c'):
			temp_c = va_arg(args, char);
			print_string(temp);
			break;
		case ('s'):
			temp_s = va_arg(args, char *);
			print_string(temp);
			break;
		case ('i'):
			printf("%d", va_arg(args, int));
			break;
		case ('f'):
			printf("%f", va_arg(args, double));
			break;
		}
		if (format[i + 1] == '\0')
		{
			printf("\n");
			return;
		}
		printf(", ");
		i++;
	}
	va_end(args);
}
