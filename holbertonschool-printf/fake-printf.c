#include "main.h"
#include <stdarg.h>


int pick_operation(char flag)
{
	switch (flag)
	{
	case ('c'):
		print_char();
	case ('s'):
		print_string();
	case ('i'):
		print_int();
	case ('d'):
		print_double();
	case ('%'):
		print_percent();
	default:
		print_normal();
	}
}

/**
 * _printf - printf
 * @format: format
 * Return: length of string result
 */
int _printf(const char *format, ...)
{
	va_list vargs;
	int i = 0;
	int flagged = 0;
	char *result;

	va_start(vargs, format);

	while (format[i] != '\0')
	{
		if (flagged)
		{
			pick_operation(format[i]);
		}
		else
		{
			if (format[i] == '%')
			{
				flagged = 1;
				i++;
				continue;
			}
			else
			{
				result[i] = format[i]; //this is bad
			}
		}
	}

	
	va_end(vargs);
	return (0);
}
