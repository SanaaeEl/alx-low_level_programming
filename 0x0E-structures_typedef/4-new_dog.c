#include <string.h>
#include "dog.h"


/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: a pointer to dog_t element, NULL if failed
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int namel, ownerl;

	if (!name || age < 0 || !owner)
		return (NULL);
	ndog = malloc(sizeof(dog_t));
	if (!ndog)
		return (NULL);
	namel = strlen(ndog->name);
	ownerl = strlen(ndog->owner);
	ndog->name = malloc(sizeof(char) * (namel + 1));
	if (!ndog->name)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (ownerl + 1));
	if (!ndog->owner)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	ndog->name = strcpy(ndog->name, name);
	ndog->age = age;
	ndog->owner = strcpy(ndog->owner, owner);
	return (ndog);
}
