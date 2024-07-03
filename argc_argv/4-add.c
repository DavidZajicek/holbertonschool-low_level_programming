#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds the given args
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int i = 1;

	while (i < argc)
	{
		if (atoi(argv[i]) != 0)
		{
			count += atoi(argv[i]);
		}
		else
		{
			puts("Error");
			return (1);
		}
		i++;
	}
	printf("%d\n", count);

	return (0);
}
