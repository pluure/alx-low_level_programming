#include "main.h"
#include <stdio.h>
/**
 * get_bit - a function that returns the value of a bit
 * @n: unsigned long int
 * @index: unsigned int
 * Return: the value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;
	return (bit_value);

}
