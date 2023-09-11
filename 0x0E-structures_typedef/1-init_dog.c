#include <stdlib.h>
#include "dog.h"

/**
 *init_dog- a function that initialize a variable of type struct dog.
 *@d:pointer to structure that will hold the variables.
 *@name: name of the dog.
 *@age:age of thedog
 *@owner: pointer character hold the neme of dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
