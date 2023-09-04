#include "main.h"
/**
 * create_file - a function that creates files
 * @filename: name of the file to be created
 * @text_content: a pointer to the content of the file
 * Return: 1 on success or -1
 */
int create_file(const char *filename, char *text_content)
{

	int fd, wryte, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;

	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wryte = write(fd, text_content, size);

	if (fd == -1 || wryte == -1)
		return (-1);
	close(fd);

	return (1);

}
