#include<stdio.h>
/**
 * main- Printing all numbers of base 16.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		puchar(letter);

	putchar('\n');

	return (0);
}
