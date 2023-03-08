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

	r = factorial(1);
	printf("Factorial of 1 is %d\n", r);
	r = factorial(5);
	printf("Factorial of 5 is %d\n", r);
	r = factorial(10);
	printf("Factorial of 10 is %d\n", r);
	r = factorial(-1024);
	printf("Factorial of -1024 is %d\n", r);
	r = factorial(7);
	printf("Factorial of 7 is %d\n", r);

	return (0);
}
