#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	int i = 0, j = 0;
	char *new_dog_name, *new_dog_owner;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	new_dog_name = malloc((i + 1) * sizeof(char));
	if (new_dog_name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	new_dog_owner = malloc((j + 1) * sizeof(char));
	if (new_dog_owner == NULL)
	{
		free(new_dog_name);
		free(new_dog_ptr);
		return (NULL);
	}
	i = 0, j = 0;
	while (name[i] != '\0')
	{
		new_dog_name[i] = name[i];
		i++;
	}
	new_dog_name[i] = '\0';
	while (owner[j] != '\0')
	{
		new_dog_owner[j] = owner[j];
		j++;
	}
	new_dog_owner[j] = '\0';
	new_dog_ptr->name = new_dog_name;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = new_dog_owner;
	return (new_dog_ptr);
}

