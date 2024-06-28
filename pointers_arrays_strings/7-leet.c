/**
 * leet - convert string into leet speak (sorta)
 * @str: string to convert
 * Return: char *
 */
char *leet(char *str)
{
	int i = 0;
	char *ptr = str;
	char symbols[256] = {0};
	int charnum = 0;

	symbols['a'] = '4';
	symbols['A'] = '4';
	symbols['e'] = '3';
	symbols['E'] = '3';
	symbols['o'] = '0';
	symbols['O'] = '0';
	symbols['t'] = '7';
	symbols['T'] = '7';
	symbols['l'] = '1';
	symbols['L'] = '1';

	while (str[i] != '\0')
	{
		charnum = str[i];
		if (symbols[charnum] != 0)
			str[i] = symbols[charnum];
		i++;
	}
	return (ptr);
}
