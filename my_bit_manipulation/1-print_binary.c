#include <stdio.h>
#include "main.h"
/**
 * print_binary - a function that prints the representation number
 * @n: unsigned long integer
 */
void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int new;

	for (a = 63; a >= 0; a--)
	{
		new = n >> a;
		if (new & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');


}
