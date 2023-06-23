#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 *
 * Return: Void.
 * @n: the line.
 */
void print_line(int n)
{
	while (!(n <= 0))
	{
		_putchar('_');
		n--;


	}
	_putchar('\n');


}
