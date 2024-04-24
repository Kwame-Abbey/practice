#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: Pointer to new dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(struct dog));
	if (new == NULL) return NULL;

	new->name = strdup(name);
	new->age = age;
	new->owner = strdup(owner);

	return (new);
}
