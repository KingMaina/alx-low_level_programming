#include "dog.h"

/**
* init_dog - Initializes a struct of type dog
* @d: The dog struct
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dogPtr = d;

	dogPtr->name = name;
	dogPtr->age = age;
	dogPtr->owner = owner;
}

