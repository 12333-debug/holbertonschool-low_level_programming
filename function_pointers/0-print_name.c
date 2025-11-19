#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Calls a function to print a name
 * @name: Pointer to the name string
 * @f: Function pointer that takes a char * argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
