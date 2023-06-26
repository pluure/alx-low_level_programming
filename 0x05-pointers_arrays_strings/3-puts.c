#include "main.h"
/**
 * _puts - to print out a string
 *
 * @str: The string to be printed.
 *
 * Return: String followed by a new line.
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);


	}
	_putchar('\n');


}
