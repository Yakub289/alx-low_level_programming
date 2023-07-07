#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 on success.
 */

int main(void)
{
	char lowercase = 'a';
	char number = '0';

	while (lowercase <= 'f')
	{
		while (number <= '9')
		{
			putchar(number);
			number++;
		}
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');
	return (0);
}
