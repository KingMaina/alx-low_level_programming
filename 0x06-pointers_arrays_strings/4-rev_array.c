#include "main.h"

/**
* reverse_array - reverses an array.
* @a: The array to reverse.
* @n: The size of the array.
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i, left, right;
	int half = n / 2;

	n--;
	for (i = 0; i < half; i++)
	{
		left = a[i];
		right = a[n - i];
		a[i] = right;
		a[n - i] = left;
	}
}
