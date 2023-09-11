#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * @name: dog name pointer.
 * @age: dog age variable.
 * @owner: dog owner pointer.
 *
 * Return: Pointer to the new dog struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    if (name == NULL || owner == NULL)
        return (NULL);

    int name_len = strlen(name);
    int owner_len = strlen(owner);

    dog_t *pdog = malloc(sizeof(dog_t));
    char *dogname, *dogowner;

    if (pdog == NULL)
    {
        return (NULL);
    }

    dogname = malloc(sizeof(char) * (name_len + 1));
    if (dogname == NULL)
    {
        free(pdog);
        return (NULL);
    }

    dogowner = malloc(sizeof(char) * (owner_len + 1));
    if (dogowner == NULL)
    {
        free(pdog);
        free(dogname);
        return (NULL);
    }

    strcpy(dogname, name);
    strcpy(dogowner, owner);

    pdog->name = dogname;
    pdog->age = age;
    pdog->owner = dogowner;

    return (pdog);
}
