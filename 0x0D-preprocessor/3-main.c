#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
* main - run the application
*
* Return: Always 0, otherwise error
*/
int main(void)
{
	int i, j;

	i = ABS(-98) * 10;
	j = ABS(98) * 10;
	printf("%d, %d\n", i, j);

	return (0);
}
