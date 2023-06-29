#include "main.h"
#include <stdio.h>
/**
 * string_toupper - a function that changes lower case letters to uppercase.
 * @i: this is the input string.
 * Return: lowercase.
 */
char *string_toupper(char *i)
{
	int index = 0;
	int desp = 'a' - 'A';

	for (index = 0; i[index] != '\0'; ++index)
	{
		if (i[index] >= 'a' && i[index] <= 'z')
		{
			i[index] = i[index] - desp;


		}


	}
	return (i);



}

