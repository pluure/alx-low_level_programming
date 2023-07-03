#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: the string to be checked for character C.
 * @c: character to be checked for in string.
 * Return: NULL or C.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;

	}
	if (*s == c)
		return (s);
	else
		return (0);


}
