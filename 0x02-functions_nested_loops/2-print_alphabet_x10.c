#include "main.h"

/**
 * print_alphabet_v10 - print alpha 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9, ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
