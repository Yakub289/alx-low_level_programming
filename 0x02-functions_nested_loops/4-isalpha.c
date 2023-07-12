#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	char first_lowercase = 'a';
	char last_lowercase = 'z';
	char first_uppercase = 'A';
	char last_uppercase = 'Z';

	if ((c >= first_lowercase && c <= last_lowercase)
			|| (c >= first_uppercase && c <= last_uppercase))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
