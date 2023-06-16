#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Printing a random number.
 *
 * this program azumes a random number and outputs results.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is a positive number\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero", n);
	/* your code goes there */
	return (0);
}
