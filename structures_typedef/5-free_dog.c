#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees malloc from dog
 * @d: pointer to dog structur
 */

void free_dog(dog_t *d)
{
	free(new_dog_ptr->name);
	free(new_dog_ptr->owner);
	free(new_dog_ptr);
}

