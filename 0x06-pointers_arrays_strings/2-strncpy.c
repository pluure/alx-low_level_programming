#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function to copy a string.
 *
 * @dest: first string.
 * @src: second string.
 * @n: bytes to copy.
 *
 * Return: Zero error.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0' ; index++)
	{
		dest[index] = src[index];

	}
	for (; index < n; index++)
	{
		dest[index] = '\0';


	}
	return (dest);


}
