#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - do math based on args
 * @argc: count of args received
 * @argv: list of args received
 * Return: result or error
 */
int main(int argc, char *argv[])
{
	int result;
        int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error Args\n");
		return (98);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error Ops, %s\n", argv[2]);
		return (99);
	}
	result = func(atoi(argv[1]), atoi(argv[3]));
	if (result == -1)
	{
		printf("Error Math\n");
		return (100);
	}
	printf("%d\n", result);
	return (0);
}
