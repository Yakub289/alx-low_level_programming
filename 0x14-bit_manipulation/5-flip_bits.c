#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * flip_bits - Write a function that returns the number of bits,
 * that will needed to flips across m and n (number 1(m) to number 2(n)).
 * @m: is transverse flips to number of flips (n).
 * @n: is the number of flips to given a number across another.
 * Return: the number of bits flips from m to n.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
