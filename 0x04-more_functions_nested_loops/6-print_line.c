#include "main.h"

/**
 * print_line - A function that draws a straight line.
 * @n: number of times character print.
 * End with a new line.
 * Return: Always 0 (success)
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
