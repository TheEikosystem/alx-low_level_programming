#include "main.h"
/**
 * main - Entry point
 * Description: 'print lower case alphabets'
 * Return: 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
	return (0);
}
