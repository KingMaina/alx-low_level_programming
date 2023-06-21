#include "function_pointers.h"

/**
* array_iterator - iterates through an array and applies
* a callback function to each array element
* @array: The array
* @size: Size of the array
* @action: Callback function
*
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
