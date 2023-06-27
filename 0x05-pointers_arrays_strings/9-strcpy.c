#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - function to copy the string pointed by src
 * @dest: copying the string
 * @src: source of string to be copied
 * Return: pointer.
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;

	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];


	}
	dest[i] = '\0';

	return (dest);



}
