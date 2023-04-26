#include "main.h"
/**
 * Print_alphabet - Entry point
 * Description: 'print lower case alphabets'
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
