#include "main.h"
#define BUFSIZE 1024
/**
 * _close - function to close a file
 * @fd: file descriptor to be closed
 * Return: 0 else -1
 */
int _close(int fd)
{
	if (!close(fd))
	return (0);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (-1);

}
/**
 * _read - a function to read from a file and print error
 * @filename: file to be read from
 * @fd: file descriptor
 * @buf: buffer file
 * @count: count number
 * Return: bytes read or return -1 as failure
 */
ssize_t _read(const char *filename, int fd, char *buf, size_t count)
{
	 ssize_t bytes_to_read = read(fd, buf, count);

	if (bytes_to_read > -1)
	return (bytes_to_read);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	return (-1);

}
/**
 * _write - write into a file, if failed, print error
 * @filename: file to be written into
 * @fd: file descriptor
 * @buf: the buffer from which to be read from
 * @count: byte total to be written.
 * Return: number of bytes written
 */
ssize_t _write(const char *filename, int fd, const char *buf, size_t count)
{
	ssize_t bytes_to_be_written = write(fd, buf, count);

	if (bytes_to_be_written > -1)
		return (bytes_to_be_written);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	return (-1);
}
/**
 * main - copying from one file to the other
 * @argc: the argument count
 * @argv: argument value
 * Return: 1 always.
 */
int main(int argc, const char *argv[])
{
	int fd_i, fd_o;
	ssize_t bytes_to_read;
	char buffer[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage:cp file_from file_to \n");
		exit(97);
	}
	fd_i = open(argv[1], O_RDONLY);
	if (fd_i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_o = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_o < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		_close(fd_i);
		exit(99);
	}
	while ((bytes_to_read = _read(argv[1], fd_i, buffer, BUFSIZE)))
	{
		if (bytes_to_read < 0)
		{
			_close(fd_i);
			_close(fd_o);
			exit(98);
		}
		if (_write(argv[2], fd_o, buffer, bytes_to_read) < 0)
		{
			_close(fd_i);
			_close(fd_o);
			exit(99);
		}
	}
	if ((_close(fd_i) | _close(fd_o)) < 0)
		exit(100);
	return (0);
}
