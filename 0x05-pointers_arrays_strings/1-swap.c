#include "main.h"
/**
 * swap_int - swapping the values of two integers.
 *
 * @a: First integer
 * @b: second integer
 *
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
