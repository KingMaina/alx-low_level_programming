#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
* free_dog - Deallocates memory from a dog struct
* @d: A pointer to a dog struct
*
* Return:void
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
}
