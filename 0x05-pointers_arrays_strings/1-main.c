#include <stdio.h>
#include "main.h"

/**
* main - entry point of application.
*
* Return: Always 0
*/
int main(void)
{
	int num1;
	int num2;

	num1 = 420;
	num2 = 69;

	printf("num1=%d, num2=%d\n", num1, num2);
	swap_int(&num1, &num2);
	printf("num1=%d, num2=%d\n", num1, num2);

	return (0);
}
