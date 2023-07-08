#include "main.h"
/**
 * _pow_recursion - function returning the value of x to pwr
 * @x: value to be raised
 * @y: the power
 * Return: the results of the power.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));



}