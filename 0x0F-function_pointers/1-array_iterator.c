#include <stdlib.h>
#include "function_pointers.h"

/*
 *array_iterator- function that executes a function given as a parameter.
 *@array:pointer to the array.
 *@size_t size  is the size of the array.
 *@action is a pointer to the function you need to use.
 *return nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (!array || !size ||!action)
		exit(EXIT_FAILURE);
	
	for (i = 0; i < size; ++i)
		action(array[i]);
}
	
