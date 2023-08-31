#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - a function that converts an binary number
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int f;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (f = 0; b[f]; f++)
	{
		if (b[f] < '0' || b[f] > '1')
			return (0);
		value = 2 * value + (b[f] - '0');

	}
	return (value);

}
