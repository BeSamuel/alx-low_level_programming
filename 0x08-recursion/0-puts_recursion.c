/**
 * _putchar_recursion - prints a string, followed by a new line
 * @s: ponter to the string
 * Return: void
 */

void _putchar_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		-puts_recursion(s + 1);
	}
}
