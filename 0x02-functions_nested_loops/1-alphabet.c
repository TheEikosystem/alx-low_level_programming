#include "main.h"
/**
 * print_alphabet - A program to print alphabets in lower case.
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
