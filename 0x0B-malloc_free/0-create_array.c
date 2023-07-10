#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * create_array - creates an array of chars, and initializes it
 * @size: array size.
 * @c: char
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;


		}

	}
	return (array);

}
