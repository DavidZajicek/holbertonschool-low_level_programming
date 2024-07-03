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
 * _sqrt_recursion - Return the square root of an int
 * @n: The number to square
 * Return: Result
 */
int _sqrt_recursion(int n)
{
	return (_find_sqrt(1, n));
}
