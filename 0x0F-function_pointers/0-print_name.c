#include "function_pointers.h"
/**
 * print_name-function that prints a name.
 * @name:pointer to the character array
 * @(*f)(char *):function pointer to a function that is the second parameter.
 *
 * Return NOthing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}		
