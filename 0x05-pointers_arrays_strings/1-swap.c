#include "main.h"

/**
* swap_int - swaps two integers using pointers.
* @a: address of the first integer.
* @b: address of the first integer.
*
* Return: void
*/
void swap_int(int *a, int *b)
{
	int tempA = *a;

	*a = *b;
	*b = tempA;
}
