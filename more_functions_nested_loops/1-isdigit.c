/**
 * _isdigit - check if number
 * @c: integer value of the given character to compare
 * Return: 1 if number 0 if not
 */
int _isdigit(int c)
{
	int retval = 0;

	if (c <= 57 && c >= 48)
		retval = 1;
	return (retval);
}
