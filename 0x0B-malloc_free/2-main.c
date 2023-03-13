#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Entry point of application
*
* Return: Always 0, otherwise 1 if error.
*/
int main(void)
{
	char *string;

	string = str_concat("Hello ,", NULL);
	if (string == NULL)
	{
		printf("FAILED TO ALLOCATE MEMORY");
		return (1);
	}
	printf("%s\n", string);
	free(string);
	return (0);
}
