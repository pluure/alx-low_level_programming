#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints
 * @filename: the file to be read
 * @letters: the number of letters to be read and printed
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t File, let, wryte;
	char *buff;

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	File = open(filename, O_RDONLY);

	if (File == -1)
	{
		free(buff);
		return (0);

	}
	let = read(File, buff, letters);

	wryte = write(STDOUT_FILENO, buff, let);
	close(File);

	return (wryte);

}
