#include "main.h"
/**
 * rev_string - reversing a string.
 *
 * @s: string to be reversed.
 * Return: Always 0.
 *
 */
void rev_string(char *s)
{
	int i, j, lent;

	i = 0;

	while (s[i] != '\0')
	{
		i++;

	}
	lent = i;

	for (j = lent - 1; j >= 0; j--)
	{
		_putchar(s[j]);

	}
	_putchar('\n');

}
