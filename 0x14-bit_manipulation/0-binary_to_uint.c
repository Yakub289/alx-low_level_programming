#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - A function that convert binary number to unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return:the convert number, or else
 * If one or more char on the string b is 0 or 1,
 * NULL on b if empty.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int length = 0;

	if (b[length] == '\0')
		return (0);

	while ((b[length] == '0') || (b[length] == '1'))
	{
		num <<= 1;
		num += b[length] - '0';
		length++;
	}

	return (num);
}
