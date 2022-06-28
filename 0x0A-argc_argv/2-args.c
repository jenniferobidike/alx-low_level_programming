#include <stdio.h>

/**
 * main - Prints all arguments it recieves
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always o
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
