#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - checks memory using malloc.
 * @b: size of memory.
 * Return: pointer to the address
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);



}
