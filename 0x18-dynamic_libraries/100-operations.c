#include <stdio.h>
#include <math.h>

/**
 * add - adds two integers.
 * @a: first variable initalized.
 * @b: second variable initalized.
 * Return: returns sum of two integers a and b.
 */
int add(int a, int b)
{

	int sum = a + b;

	return (sum);
}

/**
 * sub - substraction of two integers.
 * @a: first variable initalized.
 * @b: second variable initalized.
 * Return: returns difference of two integers a and b.
 */
int sub(int a, int b)
{
	int difference = a - b;

	return (difference);
}

/**
 * mul - multiply two integers.
 * @a: first variable initalized.
 * @b: second variable initalized.
 * Return: returns product of two integers a and b.
 */
int mul(int a, int b)
{
	int product = a * b;

	return (product);
}

/**
 * div - divide two integers.
 * @a: first variable initalized.
 * @b: second variable initalized.
 * Return: returns quotient of two integers a and b.
 */
int div(int a, int b)
{
	int quotient = a / b;

	return (quotient);
}

/**
 * mod - modulus of two integers.
 * @a: first variable initalized.
 * @b: second variable initalized.
 * Return: returns sum of two integers a and b.
 */
int mod(int a, int b)
{
	int remainder = a % b;

	return (remainder);
}
