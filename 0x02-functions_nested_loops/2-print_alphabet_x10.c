#include "main.h"
/**
 * print_alphabet_x10 - A program to print alphabets in lower case l0 times.
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{

		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

}
