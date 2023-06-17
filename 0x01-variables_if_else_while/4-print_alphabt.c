#include <stdio.h>
#include <string.h>

/**
 *main - Write a program tha prints the alphabets in lower and uppercase.
 *
 * Return: Always (0)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
