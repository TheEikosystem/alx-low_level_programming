#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: entry point
 *
 * Description: A function that prints all natural numbers from n to 98,
 * followed by a new line
 *
 * Return: return nothing
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
			printf("%d, ", n);
	}
		else
			for (n = n; n > 98; n--)
				printf("%d, ", n);
		printf("98\n");
}
