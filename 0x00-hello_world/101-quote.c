#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints a line to the standard error
 * Description: This program writes a specified string to
 * the standard error output and returns 1 to indicate an error.
 * Return: 1 (success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
