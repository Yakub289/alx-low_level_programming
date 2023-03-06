#include "main.h"
#include <stdio.h>

/**
 * set_string - Set the value of a pointer to a char.
 * @s: pointer.
 * @to: char whose value is to be changed.
 * Return: nothing in particular
 */

void set_string(char **s, char *to)
{
	*s = to;
}
