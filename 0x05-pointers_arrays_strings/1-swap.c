#include <stdio.h>
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

	printf("a=%d, b=%d\n", *a, *b); 
	printf("tempA=%d\n", tempA); 

	*a = *b;
	*b = tempA;
	printf("a=%d, b=%d\n", *a, *b);
}
