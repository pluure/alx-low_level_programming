#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reveresing the contents of an array of integers
 * @a: input array.
 * @n: positions of arrays.
 * Return: Always Zero.
 */
void reverse_array(int *a, int n)
{
	int i, lastnum;

	lastnum = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[lastnum];
		a[i] = end;
		a[lastnum] = start;
		lastnum--;

	}



}
