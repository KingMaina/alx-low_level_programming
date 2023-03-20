#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
* *new_dog - Creates a new dog struct
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Return: A pointer to a struct of type dog_t, otherwise NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogPtr = malloc(sizeof(dog_t));

	if (dogPtr == NULL)
		return (NULL);
	dogPtr->name = name;
	dogPtr->age = age;
	dogPtr->owner = owner;
	return (dogPtr);
}

