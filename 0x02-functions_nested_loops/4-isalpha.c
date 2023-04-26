#include "main.h"
/**
 * _islower - finding lower cases alphabets
 *
 * Description: Write a function that checks for lowercase character
 *
 * Return: 1 for lower case alphabet, 0 for the rest
 *
 * @c: The character in ASCII code
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

