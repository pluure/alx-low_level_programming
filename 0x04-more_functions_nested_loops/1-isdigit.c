#include "main.h"
#include<stdio.h>
/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * Return: 1 if c is a digit, otherwise 0.
 * @c: character to be tested for as a digit or not.
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);

	}
	else
	{
		return (0);

	}


}
