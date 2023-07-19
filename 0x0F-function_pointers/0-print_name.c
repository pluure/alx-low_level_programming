#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - a function that prints a name.
 * @name: name of the function
 * @f: pinter to the function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(f) (name);

	}


}
