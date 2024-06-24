/**
 * swap_int - swap two ints
 * @a: first int
 * @b: second int
 * Return: 0
 */
int swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;

	return (0);
}
