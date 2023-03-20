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
	dog_t *dogPtr;
	char *dogName, *dogOwner;
	int i;

	dogPtr =  malloc(sizeof(dog_t));
	if (dogPtr == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		dogName[i] = name[i];
	for (i = 0; owner[i]; i++)
		dogOwner[i] = name[i];
	dogPtr->name = dogName;
	dogPtr->age = age;
	dogPtr->owner = dogOwner;

	return (dogPtr);
}

