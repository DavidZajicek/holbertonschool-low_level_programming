#include <stdio.h>
#include <stdlib.h>

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
		itoa(i, output, 10);

		if ((i % 3) == 0)
		{
			strcpy(output, "Fizz");
		}
		if ((i % 5) == 0)
		{
			if (strcmp(output, "Fizz"))
			{
				strcopy(output, "FizzBuzz");
			}
			else
			{
				strcopy(output, "Buzz");
			}
		}
		printf("%s ", output);
	}
	putchar('\n');
	return (0);
}
