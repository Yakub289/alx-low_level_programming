#include "main.h"

/**
 * print_diagonal - A function that prints diagonal lines.
 * @n: Number of times character print diagonal lines.
 * End with a new line.
 * Return: Always 0 (success)
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
