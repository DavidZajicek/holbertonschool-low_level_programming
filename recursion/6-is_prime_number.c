#include "main.h"

/**
 * _find_sqrt - Find the square root of a given number
 * @i: incrementing value
 * @n: given number to test
 * Return: result
 */
int _find_sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_find_sqrt(i + 1, n));
}

/**
 * _find_prime - do the logic
 * @i: starting number (2)
 * @sqrt: sqrt of the number to check
 * @n: number to check
 * Return: 1 if prime, 0 if not)
 */
int _find_prime(int i, int sqrt, int n)
{
	if (n % i == 0)
		return (0);
	if (i <= sqrt)
		_find_prime(i + 1, sqrt, n);
	return (1);
}

/**
 * is_prime_number - check if number is prime or not
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int sqrt = _find_sqrt(1, n);

	if (n > 1)
		return (_find_prime(2, sqrt, n));
	else
		return (0);
}
