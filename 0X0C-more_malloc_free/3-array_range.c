#include <stdlib.h>
#include "main.h"

/**
* *array_range - creates an array of integers within a range
* with both limits inclusive
* @min: The starting integer
* @max: The maximum number
*
* Return: A pointer to the allocated array memory, otherwise NULL
*/
int *array_range(int min, int max)
{
	int *arrPtr, i, size;

	if (min > max)
		return (NULL);
	size = max - min;
	arrPtr = malloc(sizeof(arrPtr) * size);
	if (arrPtr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		arrPtr[i] = min++;

	return (arrPtr);
}
