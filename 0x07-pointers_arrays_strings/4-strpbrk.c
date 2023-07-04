#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: first occurance of string.
 * @accept: string to find 's'.
 * Return: A pointer to the bytes in 's'.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, c;

	for (a = 0; *(s + a); a++)
	{
		for (c = 0; *(accept + c); c++)
		{
			if (*(s + a) == *(accept + c))
			{
				break;

			}

		}
		if (*(accept + c) != '\0')
		{
			return (s + a);

		}


	}
	return (0);


}
