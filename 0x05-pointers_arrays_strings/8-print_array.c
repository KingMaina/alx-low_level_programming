#include <stdio.h>
#include "main.h"

/**
* print_array - prints the specified number of array elements.
* @a: array
* @n: number of elements to display
*
* Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	if (n == 0)
		printf("%d\n", *a);
	else
	{
		while (i < n && n > 0)
		{
			printf("%d", *(a + i++));
			if (i != n)
				printf(", ");
			else
				printf("\n");
		}
	}
}
