#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 * Return: Always 0 on (success).
 */

int main(void)
{
	char uppercase = 'A';
	char lowercase = 'a';

	while (uppercase <= 'Z')
	{
		while (lowercase <= 'z')
		{
			putchar(lowercase);
			lowercase++;
		}
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
