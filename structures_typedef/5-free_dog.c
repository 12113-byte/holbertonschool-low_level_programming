#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees malloc from dog
 * @d: pointer to dog_t struct
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

