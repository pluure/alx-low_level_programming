#include "main.h"
#include <stdio.h>
/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: first string.
 *
 * @src: second string.
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;


	}
	return (dest);



}
