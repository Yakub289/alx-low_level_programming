#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e.
 * Return: Always 0 on success.
 */

int main(void)
{
	char lowercase = 'a';

	do {
		if (lowercase != 'q' && lowercase != 'e')
		{
			putchar(lowercase);
		} lowercase++;
	} while (lowercase <= 'z');

	putchar('\n');
	return (0);
}
