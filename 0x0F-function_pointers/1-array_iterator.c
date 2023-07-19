#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_iterator -  a function that executes a function given as a parameter
 * @size: array size
 * @action: pointer to the function of use.
 * @array: array to pass
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (array && action != NULL)
	{
		for (c = 0; c < size; c++)
		{
			(action) (array[c]);
		}
	}


}
