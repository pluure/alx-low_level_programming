#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that prints all aguments recieved.
 * @argc: number of arguments
 * @argv: name in array
 * Return: one argument per line.
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
