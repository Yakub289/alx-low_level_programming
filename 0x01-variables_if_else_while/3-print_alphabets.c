#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 * Return: Always 0 (success)
 */

int main(void)
{
	char lowercase = 'a', uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
