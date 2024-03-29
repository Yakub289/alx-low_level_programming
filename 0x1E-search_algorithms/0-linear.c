#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array of integers
 * using the Linear search algorithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: first index is valued is located or else
 * If value is NULL (-1).
 */
int linear_search(int *array, size_t size, int value)
{
	size_t element;

	if (array == NULL)
	{
		return (-1);
	}

	for (element = 0; element < size; element++)
	{
		printf("Value checked array[%li] = [%i]\n",
				element, array[element]);
		if (array[element] == value)
		{
			return (element);
		}
	}
	return (-1);
}
