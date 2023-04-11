#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Deterimine if a number is positive, negative or zero
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("is positive: %d\n", n);

	if (n == 0)
		printf("is zero: %d\n", n);

	if (n < 0)
		printf("is negative: %d", n);

	return (0);
}
