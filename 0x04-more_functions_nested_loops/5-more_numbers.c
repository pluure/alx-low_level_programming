#include "main.h"
#include<stdio.h>
/**
 * more_numbers - Prints the numbers 10 times.
 * Return: Void
 *
 */
void more_numbers(void)
{
	int i;
	int num = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		while (num < 15)
		{
			if (num > 9)
				_putchar('0' + num / 10);
			_putchar('0' + num % 10);
			num++;

		}
		num = 0;
		_putchar('\n');
	}

}
