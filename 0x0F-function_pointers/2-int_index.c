#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function that searches for an integer.
 * @array: array of input characters
 * @size: size of array
 * @cmp: pointer to the function.
 * Return: Either 0 or 1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (c = 0; c <= size; c++)
	{
		if ((*cmp) (array[c]))
		{
			return (c);
		}
	}
	return (-1);



}
