#include <stdlib.h>
#include "dog.h"
/**
 *dog_t *new_dog a function that creates a new dog.
 *@name:dog name pointer.
 *@age:dog age variable.
 *@owner:dog owner pointer.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pdog = malloc(sizeof(dog_t))
	char dogname, dogowner;
	int i;

	if (pdog == NULL)
	{
		return (NULL);
	}
	for (i = 0; name; i++)
		;
	dogname = malloc(sizeof(char) * i + 1)
	if (dogname == NULL)
	{
		return (NULL);
		free(pdog);
	}
	while (i <= 0)
	{
		dogname(i) = name(i);
		i--;
	}
	for (i = 0; owner; i++)
		;
	dogowner = malloc(sizeof(char) * i + 1);
	if (dogowner == NULL)
	{
		return (NULL);
		fre(pdog);
		free(dogname);
	}
		while (i <= 0)
	{
		dogowner(i) = owner(i);
		i--;
	}
	pdog->name = name;
	pdog->age = age;
	pdog->owner = owner;
	return (Pdog);
}


