/**
 * reverse_array - reverse an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp[100];

	while (i < n)
	{
		temp[i] = a[i];
		i++;
	}

	while (i >= 0)
	{
		*a = temp[i];
		i--;
		a++;
	}
}
