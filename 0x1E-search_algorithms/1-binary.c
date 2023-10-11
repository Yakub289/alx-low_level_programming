#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: first index is valued is located or else
 * If value is NULL (-1).
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle = 0;
	size_t i = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			middle = (left + right) / 2;
			printf("Searching in array: ");
			for (i = left; i < right; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[middle] < value)
			{
				left = middle + 1;
			}
			else if (array[middle] > value)
			{
				right = middle - 1;
			}
			else
			{
				return (middle);
			}
		}
	}
	return (-1);
}
