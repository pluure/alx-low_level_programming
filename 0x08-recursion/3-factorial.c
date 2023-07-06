#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: the factorial number.
 * Return: 1 if n < 0 as error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));


}
