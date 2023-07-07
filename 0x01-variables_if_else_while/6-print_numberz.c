#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * You are not allowed to use any variable of type char.
 * Return: Always 0 on success.
 */

int main(void)
{
	int number = 48;

	do {
		putchar(number);
		number++;
	} while (number < 58);

	putchar('\n');
	return (0);
}
