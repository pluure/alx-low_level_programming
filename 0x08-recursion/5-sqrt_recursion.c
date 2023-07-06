#include "main.h"
/**
 * _sqrt_recursion - returns natural sqr root.
 * @n: number to square.
 * Return: the resulting square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));


}

/**
 * actual_sqrt_recursion - the square root function.
 * @n: number to square.
 * @i: iterator.
 * Return: the sqr root.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));

}
