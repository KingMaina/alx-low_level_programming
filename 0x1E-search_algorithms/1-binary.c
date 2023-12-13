#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: Array of integers
 * @size: Size of the array in bytes
 * @value: Value to search for
 *
 * Return: Index where the value is located, -1 otherwise
 * if array is NULL or the value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 0, middle = 0, i;

	if (array == NULL || size <= 0)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");
		middle = (left + right) / 2;
		if (value < array[middle])
			right = middle - 1;
		else if (value > array[middle])
			left = middle + 1;
		else
			return (middle);
	}
	return (-1);
}
