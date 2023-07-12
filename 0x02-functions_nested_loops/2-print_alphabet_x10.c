#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 10)
	{
		char lowercase = 'a';

			while (lowercase <= 'z')
			{
				_putchar(lowercase);
				lowercase++;
			}
			_putchar('\n');
			count++;
	}
}
