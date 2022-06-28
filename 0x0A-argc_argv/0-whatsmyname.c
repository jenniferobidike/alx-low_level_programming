#include <stdio.h>

/*
 * main - Prints the program name followed by a new line
 * @argc: count
 * @argv: arrays of pointers
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
