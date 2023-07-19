#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of main program
 * @argc: argument count
 * @argv: argument vector
 * Return: End.
 */
int main(int argc, char *argv[])
{
	int v;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][1] != 0) || ((argv[2][0] != '+') && (argv[2][0] != '-')
				&& (argv[2][0] != '*') && (argv[2][0] != '/') && (argv[2][0] != '%')))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || (argv[2][0] == '%')) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	v = get_op_func(argv[2]) (atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", v);
	return (0);
}
