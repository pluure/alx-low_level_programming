#include "main.h"
#include <stdio.h>
/**
 * _memset - the function that fills memory with a constant byte.
 *
 * @s: bytes pointed.
 * @b: constant byte.
 * @n: number of bytes to be filed.
 *
 * Return: pointer to the memory area (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	return (s);



}
