#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Add
 *
 * @a: int a
 * @b: int b
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub
 *
 * @a: int a
 * @b: int b
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul
 *
 * @a: int a
 * @b: int b
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 *
 * @a: int a
 * @b: int b
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}

/**
 * op_mod - mod
 *
 * @a: int a
 * @b: int b
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
