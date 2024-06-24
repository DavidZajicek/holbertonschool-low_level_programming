/**
 * _isupper - check if uppercase
 * @c: integer value of the given character to compare
 * Return: 1 if uppercase 0 if not
 */
int _isupper(int c)
{
	int retval = 0;

	if (c <= 90 && c >= 65)
		retval = 1;
	return (retval);
}
