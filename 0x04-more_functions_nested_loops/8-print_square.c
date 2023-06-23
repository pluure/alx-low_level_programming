#include "main.h"
/**
 * print_square - Prints a square, followed by a new line.
 *
 * Return: Void.
 * @size: Size of square.
 *
 */
void print_square(int size)
{
	int vert;
	int horiz;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (vert = size ; vert > 0 ; vert--)
	{
		for (horiz = size ; horiz > 0 ; horiz--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}


}
