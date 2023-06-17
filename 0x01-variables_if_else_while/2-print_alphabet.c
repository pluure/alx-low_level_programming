#include<stdio.h>

/**
 * main - Using putchar to print alphabets.
 *
 * Return: Success(0)
 *
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

}
