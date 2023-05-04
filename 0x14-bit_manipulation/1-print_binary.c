#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_binary - Write a function that print binary representation of numbers.
 * @n: number of binary representation.
 * Return: Nil.
 */

void print_binary(unsigned long int n)
{
	if (n >> 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
