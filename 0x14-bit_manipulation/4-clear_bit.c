#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * clear_bit - Write a function that sets the bit by 0 at a given index
 * @n: is the number of bit cleared.
 * @index: is the starting point by 0 in bit sets.
 * Return: clear bit at the index by 1 (success), or else
 * -1 if error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
