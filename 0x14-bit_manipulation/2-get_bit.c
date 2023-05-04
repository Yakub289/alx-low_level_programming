#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_bit - Write a function that returns a bit value in at a given index.
 * @n: the size of bit value at the index.
 * @index: is the starting point by 0 in bit size.
 * Return: The value of bit at index (success), or else
 * -1 if error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
