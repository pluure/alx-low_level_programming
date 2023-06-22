#include "main.h"

/**
 * positive_or_negative - Checks whether its positive or negative integer.
 * @i : the integer to be entered.
 *
 *
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
	/* your code goes there */

}
