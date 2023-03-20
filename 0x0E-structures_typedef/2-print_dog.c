#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
* print_dog - Prints the contents of the dog struct
* @d: Struct of the dog
*
* Return: void
*/
void print_dog(struct dog *d)
{
	struct dog *dogPtr;

	if (d != NULL)
	{
		dogPtr = d;
		printf("Name: %s\n", (*dogPtr).name == NULL ? "(nil)" : (*dogPtr).name);
		printf("Age: %.6f\n", (*dogPtr).age);
		printf("Owner: %s\n", (*dogPtr).owner);
	}
}

