#include <stdlib.h>
#include <stddef.h>
#include <string.h>
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
	int i, dogNameLength, dogOwnerLength;

	dogNameLength = strlen(name) + 1;
	dogOwnerLength = strlen(owner) + 1;
	dogPtr = malloc(sizeof(dog_t));
	if (dogPtr == NULL)
		return (NULL);
	dogName = malloc(dogNameLength);
	if (dogName == NULL)
	{
		free(dogPtr);
		return (NULL);
	}
	dogOwner = malloc(dogOwnerLength);
	if (dogOwner == NULL)
	{
		free(dogName);
		free(dogPtr);
		return (NULL);
	}
	for (i = 0; i < dogNameLength - 1; i++)
		dogName[i] = name[i];
	dogName[i] = '\0';
	for (i = 0; i < dogOwnerLength - 1; i++)
		dogOwner[i] = owner[i];
	dogOwner[i] = '\0';
	dogPtr->name = dogName;
	dogPtr->age = age;
	dogPtr->owner = dogOwner;

	return (dogPtr);
}
