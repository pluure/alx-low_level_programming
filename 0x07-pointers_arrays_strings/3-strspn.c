#include "main.h"
#include <stdio.h>
/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @s: string from the source.
 * @accept: string to search from.
 *
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (b = 0; *(s + b); b++)
	{
		for (a = 0; *(accept + a); a++)
		{
			if (*(s + b) == *(accept + a))
				break;

		}
		if (*(accept + a) == '\0')
			break;


	}
	return (b);

}
