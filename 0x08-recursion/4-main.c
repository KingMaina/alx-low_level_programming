#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	int r;

	r = _pow_recursion(1, 10);
	printf("1 to the power of 10 is %d\n", r);
	r = _pow_recursion(1024, 0);
	printf("1024 to the power of 0 is %d\n", r);
	r = _pow_recursion(2, 16);
	printf("2 to the power of 16 is %d\n", r);
	r = _pow_recursion(5, 2);
	printf("5 to the power of 2 is %d\n", r);
	r = _pow_recursion(5, -2);
	printf("5 to the power of -2 is %d\n", r);

	return (0);
}
