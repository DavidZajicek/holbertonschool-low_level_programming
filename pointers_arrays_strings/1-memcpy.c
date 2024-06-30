/**
 * _memcpy - copy memory
 * @dest: memory address to move the copy to
 * @src: memory address to move the copy from
 * @n: the amount of bytes to copy
 * Return: Memory address of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
