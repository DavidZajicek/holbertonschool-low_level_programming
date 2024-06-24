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
		output = itoa(i, output, 10);

		if ((i % 3) == 0)
		{
			output = "Fizz";
		}
		if ((i % 5) == 0)
		{
			if (output == "Fizz")
			{
				output = "FizzBuzz";
			}
			else
			{
				output = "Buzz";
			}
		}
		printf("%s ", output);
	}
	putchar('\n');
	return (0);
}
