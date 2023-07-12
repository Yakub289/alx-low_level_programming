#include "main.h"

/**
 * print_alphabet - Prints all alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}
	_putchar('\n');
}

