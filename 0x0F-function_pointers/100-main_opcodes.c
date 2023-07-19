#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing opcodes of its main function.
 * @argc: argument counter
 * @argv: argument vector.
 * Return: Done!
 */
int main(int argc, char *argv[])
{
	int nbytes, i;
	char *opc = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);

	}
	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nbytes - 1)
			printf(" ");

	}
	printf("\n");

	return (0);


}
