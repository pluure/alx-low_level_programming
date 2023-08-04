#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to an unsigned int
 * @index: index of bit to be set to 1
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);


}
