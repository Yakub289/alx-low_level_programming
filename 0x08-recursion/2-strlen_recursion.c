#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Find the lengt of a string.
 * @s: string to be searched.
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
