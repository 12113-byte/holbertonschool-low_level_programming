#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees malloc from dog
 * @d: pointer to dog structur
 */

void free_dog(dog_t *d)
{
	free(dog_t->name);
	free(dog_t->owner);
	free(dog_t);
}

