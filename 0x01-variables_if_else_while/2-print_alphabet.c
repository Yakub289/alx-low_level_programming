#include <stdio.h>

/**
 * main - Entry.
 * Return: Always 0 on success.
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');
	return (0);
}
