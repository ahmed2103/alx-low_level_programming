#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
    if (name == NULL || owner == NULL)
        return (NULL);

    int name_len = strlen(name);
    int owner_len = strlen(owner);

    int dogname_size = name_len + 1;
    int dogowner_size = owner_len + 1;

    dog_t *pdog = malloc(sizeof(dog_t));
    char *dogname, *dogowner;

    if (pdog == NULL)
    {
        return (NULL);
    }

    dogname = malloc(sizeof(char) * dogname_size);
    if (dogname == NULL)
    {
        free(pdog);
        return (NULL);
    }

    dogowner = malloc(sizeof(char) * dogowner_size);
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
