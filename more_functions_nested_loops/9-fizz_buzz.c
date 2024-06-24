#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - fizzbuzz
 * Return: 0
 */
int main(void)
{
	char output[10];
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		snprintf(output, 10, "%d", i);

		if ((i % 3) == 0)
		{
			strcpy(output, "Fizz");
		}
		if ((i % 5) == 0)
		{
			if (strcmp(output, "Fizz"))
			{
				strcpy(output, "FizzBuzz");
			}
			else
			{
				strcpy(output, "Buzz");
			}
		}
		printf("%s ", output);
	}
	putchar('\n');
	return (0);
}
