
/**
 * _isalpha - check if alpha
 * @c: integer value of the given character to compare
 * Return: 1 if alpha 0 if not
 */
int _isalpha(int c)
{
	int retval = 0;

	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		retval = 1;
	return (retval);
}
