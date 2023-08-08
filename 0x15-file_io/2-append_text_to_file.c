#include "main.h"
/**
 * append_text_to_file - appends test at the end of a file
 * @filename: name of the file to be appended
 * @text_content: the NULL terminated string to add at
 * the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;


	}
	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, size);

	if (a == -1 || b == -1)
		return (-1);

	close(a);
	return (1);

}
