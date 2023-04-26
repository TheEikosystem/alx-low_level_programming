#include "main.h"
/**
 * _isalpha - distinguishes alpha characters from others
 *
 * Description: checks for alphabets and others
 *
 * Return: 1 for alphabets, 0 for the rest
 *
 * @c: The character in ASCII code
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

