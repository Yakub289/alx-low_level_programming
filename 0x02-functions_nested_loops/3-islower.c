#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	int lowercase = 'a';

	while (lowercase <= 'z' || lowercase <= 'Z')
	{
		if (lowercase < 'z')
		{
			_putchar(lowercase);
			lowercase++;

			return (1);
		}

		else
		{
			return (0);
		}
	}

}
