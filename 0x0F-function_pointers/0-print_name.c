#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name-function that prints a name.
 * @name:pointer to the character array
 * @f:function pointer to a function that is the second parameter.
 *
 * Return NOthing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(EXIT_FAILURE);
	f(name);
}
