#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Generates random password for program 101-crackme
 * Return: always 0
 */

int main(void)
{
	char password[7];
	int i;

	srand(time(NULL));

	for (i = 0; i < 7; i++) 
	{
		password[i] = rand() % 94 + 33;
	}
	printf("%s\n", password);
	return 0;
}
