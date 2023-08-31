#include "main.h"
/**
 * flip_bits - a function to count the number of bits
 * @n: first num
 * @m: 2nd num
 * Return: number of bits you will like to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			num++;

		m = m >> 1;
		n = n >> 1;

	}
	return (num);


}
