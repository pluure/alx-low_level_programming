#include "main.h"
#include<stdio.h>
/**
 * print_most_numbers - prints the numbers, from 0 to 9 exclude 2,4.
 *
 * Return: Void.
 */
void print_most_numbers(void)
{
	int num1 = 0;

	while (num1 < 10)
	{
		if (num1 != 2 && num1 != 4)
			_putchar('0' + num1);
		num1++;

	}
	_putchar('\n');



}
