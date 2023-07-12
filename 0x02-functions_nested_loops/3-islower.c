#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	char first_character = 'a';
	char last_character = 'z';

	if ( c >= first_character && c <= last_character)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
