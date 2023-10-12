#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include "search_algos.h"

/**
 * jump_search - A function that searches for a value in a sorted array
 * of integers using the Jump search algorithm.
 *  @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: first index is valued is located or else
 * If value is NULL (-1).
 */
int jump_search(int *array, size_t size, int value)
{
	size_t sqr, i, j = 0;

	if (!array)
		return (-1);
	sqr = sqrt(size);
	for (i = 0; i < size; i = i + sqr)
	{
		if ((array[i] >= value || i + sqr >= size) && j == 0)
		{
			if ((i + sqr < size || array[i] >= value) && i != 0)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", i - sqr, i);
				i = i - sqr - 1;
			}
			else
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				printf("Value found between indexes [%lu] and [%lu]\n", i, i + sqr);
				i = i - 1;
			}
			sqr = 1;
			j = 1;
			continue;
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
