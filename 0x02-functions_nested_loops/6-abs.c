#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: the int to check.
 * Return: the absolute value of int.
 */

int _abs(int n)
{
	int positive_number = 1;
	int negative_number = -1;
	int zero = 0;

	if (n > positive_number)
	{
		return (1);
	}
	else if (n < negative_number)
	{
		return (-1);
	}
	else if (n == zero)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
