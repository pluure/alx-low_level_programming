#include "main.h"
/**
 * print_sign - Checking for the signs of numbers.
 * Return: 1 greater than zero, 0 is zero, -1 is lessthan zero.
 * @n: the char to be checked.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}



}
