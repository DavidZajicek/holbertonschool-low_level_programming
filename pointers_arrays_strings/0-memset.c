/**
 * _memset - fill memory with a constant byte
 * @s: memory address to start at
 * @b: byte to fill the memory with
 * @n: number of memory points to fill
 * Return: original s memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
