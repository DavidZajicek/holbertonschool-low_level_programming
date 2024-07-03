/**
 * factorial - return factorial of a given int
 * @n: int to factorialise
 * Return: result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 1)
		return (n * factorial(n - 1));
	else
		return (1);
}
