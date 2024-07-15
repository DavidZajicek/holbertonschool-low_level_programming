/**
 * print_name - print the name given by passing through the given char and func
 * @name: name to print
 * @f: function to print the name with
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
