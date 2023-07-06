#include "main.h"
/**
 * is_prime - type of input number
 * @n: input number.
 * @c: iterator.
 * Return: 1 if its a prime or 0 if not a prime.
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);

	}
	return (0 + is_prime(n, c + 1));



}
/**
 * is_prime_number - finds if number is prime
 * @n: input number.
 * Return: if its prime, 1 or if not 0.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));


}
