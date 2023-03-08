#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	int lengthOfString;

	lengthOfString = _strlen_recursion("Get the length with recursion");
	printf("Length of string: %d\n", lengthOfString);

	return (0);
}
