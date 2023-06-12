#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or the corresponding error code on failure.
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, read_count, write_count;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) *BUF_SIZE);
	if (!buffer)
		return (0);
	fd_from = open(argv[1], O_RDONLY);
	error_98(fd_from,  buffer, argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	error_99(fd_to,  buffer, argv[2]);

	do {
		read_count = read(fd_from, buffer, BUF_SIZE);
		if (read_count == 0)
			break;
		error_98(read_count,  buffer, argv[1]);
		write_count = write(fd_to, buffer, read_count);
		error_99(write_count,  buffer, argv[2]);
	} while (write_count >= BUF_SIZE);
	read_count = close(fd_to);
	error_100(read_count, buffer);
	read_count = close(fd_from);
	error_100(read_count, buffer);
	free(buffer);
	return (0);
}

/**
 * error_98 - checks 98
 * @fd_to: value to check
 * @buffer: the  buffer
 * @argv: argument
 * Return: nothing
 */

void error_98(int fd_to, char *buffer, char *argv)
{
	 if (fd_to < 0)
	 {
		 dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		 free(buffer);
		 exit(98);
	 }
}
/**
 * error_99 - checks 99
 * @fd_to: value to check
 * @buffer: the  buffer
 * @argv: argument
 * Return: nothing
 */

void error_99(int fd_to, char *buffer, char *argv)
{
         if (fd_to < 0)
         {
                 dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
                 free(buffer);
                 exit(99);
         }
}
}
/**
 * error_100 - checks 100
 * @fd_to: value to check
 * @buffer: the  buffer
 *
 * Return: nothing
 */

void error_100(int fd_to, char *buffer)
{
         if (fd_to < 0)
         {
                 dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd_to);
                 free(buffer);
                 exit(100);
         }
}
