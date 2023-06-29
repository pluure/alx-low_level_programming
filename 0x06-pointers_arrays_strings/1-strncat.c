#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings.
 *
 * @dest: destination string.
 *
 * @src: source string.
 * @n: number of bytes.
 * Return: always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	for (index = 0; dest[index] != '\0'; index++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[index] = src[count];
		index++;

	}
	if (count < n)
	{
		dest[index] = '\0';

	}
	return (dest);



}
