#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - A function that convert binary number to unsigned int.
 * @s: A pointer to a string of 0 and 1 chars.
 * Return:the convert number, or else
 * If one or more char on the string s is 0 or 1,
 * NULL on s if empty.
 */

unsigned int binary_to_uint(const char *s)
{
	unsigned int uint;
	int length, base_two;

	if (!s)
		return (0);

	uint = 0;

	for (length = 0; s[length] != '\0'; length++)
		;

	for (length--, base_two = 1; length >= 0; length--, base_two *= 2)
	{
		if (s[length] != '0' && s[length] != '1')
		{
			return (0);
		}
		if (s[length] & 1)
		{
			uint += base_two;
		}
	}

	return (uint);
}
