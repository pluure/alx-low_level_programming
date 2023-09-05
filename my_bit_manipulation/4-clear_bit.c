#include <stdio.h>
#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0
 * @n: a pointer to an unsigned long int.
 * @index: index starting from 0 of bit to be set
 * Return: 1 if it worked else return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);


}