#include "main.h"
#include <stdio.h>
/**
 * print_array - printing elements of an array of integers.
 * @a: integer arrays to be printed.
 * @n: number of elements in array to print.
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);


	}
	printf("\n");

}
