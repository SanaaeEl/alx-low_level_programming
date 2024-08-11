#ifndef DOG_H
#define DOG_H


#include <stdio.h>


/**
 * struct dog - dog informations
 * @name: name of the dog
 * @age: its age
 * @owner: its owner
 * dog_t - typedef for struct dog
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;




void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif  /** DOG_H */
