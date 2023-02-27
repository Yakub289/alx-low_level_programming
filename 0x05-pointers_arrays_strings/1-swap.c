#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swap value of two variables.
 * @a: first parameter.
 * @b: second parameter.
 * Return: Always 0 (success).
 */

void swap_int(int *a, int *b)
{
	int fnum;
	int snum;

	fnum = *a;
	snum = *b;

	*a = *(&snum);
	*b = *(&fnum);
}
