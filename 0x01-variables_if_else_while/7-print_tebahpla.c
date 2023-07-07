#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line.
 * Return: Always 0 on success.
 */

int main(void)
{
	char lowercase_reversed = 'z';

	while (lowercase_reversed >= 'a')
	{
		putchar(lowercase_reversed);
		lowercase_reversed--;
	}
	putchar('\n');
	return (0);
}
