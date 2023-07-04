#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds the first occurrence of the substring
 * @needle: substring to be found.
 * @haystack: source str
 * Return: new string.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')

		{
			a++;
			b++;


		}
		if (*b == '\0')
			return (haystack);



	}
	return (0);
}
