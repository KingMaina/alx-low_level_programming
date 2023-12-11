#include "search_algos.h"

/**
* linear_search - Searches an array using linear search algorithm
* @array: Array of integers
* @size: Size of the array
* @value: Value to search for in the array
*
* Return: The index of the value that was found in the array,
* otherwise -1 if value is not foiund or array is NULL
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
