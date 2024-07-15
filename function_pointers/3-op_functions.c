#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Add
 *
 * @a: int a
 * @b: int b
 */
int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
