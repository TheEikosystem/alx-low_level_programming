#include "main.h"
/**
 * main - Entry point
 * Description: 'print lower case alphabets'
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
