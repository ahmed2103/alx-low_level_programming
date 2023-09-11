#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
    int name_len;
    int owner_len;
    char *dogname;
    char *dogowner;
    dog_t *pdog;
    
    name_len = 1 + strlen(name);
    owner_len = 1 + strlen(owner);
    if (name == NULL || owner == NULL)
        return (NULL);
    pdog = malloc(sizeof(dog_t));
    if (pdog == NULL)
    {
        return (NULL);
    }

    dogname = malloc(sizeof(char) * name_len);
    if (dogname == NULL)
    {
        free(pdog);
        return (NULL);
    }

    dogowner = malloc(sizeof(char) * owner_len);
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
