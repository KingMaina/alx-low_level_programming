#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
* main - Entry point of application
*
* Return: Always 0
*/
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);

	return (0);
}
