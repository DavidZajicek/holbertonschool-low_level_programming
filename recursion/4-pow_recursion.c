/**
 * _pow_recursion - return x pow y
 * @x: number to raise
 * @y: number to increase x by
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	if (y < 0)
		return (-1);
	if (y == 0 || y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
