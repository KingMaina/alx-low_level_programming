#include <stdio.h>
#include "main.h"

/**
* main - prints a square
*
* Return: Always 0
*/
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 15 == 0)
			printf("FizzBuzz");
		else if (number % 3 == 0)
			printf("Fizz");
		else if (number % 5 == 0)
			printf("Buzz");
		else
			printf("%d", number);
		printf(" ");
	}
	printf("\n");

	return (0);
}
