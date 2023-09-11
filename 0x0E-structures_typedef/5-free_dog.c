/**
 * free_dog function that frees dogs from the heep
 * d pointer to the structure that will be freed from the heep.
 * No Return
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
