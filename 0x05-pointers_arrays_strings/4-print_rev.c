#include "main.h"
/**
 * print_rev - printing in reverse.
 *
 * @s: characters to print in reverse.
 *
 */
void print_rev(char *s)
{
	int rev = 0;
	int o;

	while (*s != '\0')
	{
		rev++;
		s++;


	}
	s--;
	for (o = rev; o > 0; o--)
	{
		_putchar(*s);
		s--;

	}
	_putchar('\n');

}
