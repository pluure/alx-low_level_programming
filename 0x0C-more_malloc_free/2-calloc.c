#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - fills memory with byte
 * @s: area to be filled.
 * @b: character to copy
 * @n: number of time to copy char (b).
 * Return: pointer to the memory area.
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
/**
 * _calloc -  a function that allocates memory for an array.
 * @nmemb: number of elements.
 * @size: element size.
 * Return: Pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);


}
