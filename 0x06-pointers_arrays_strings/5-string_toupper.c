#include "main.h"

/**
 * string_toupper - a function that changes all lower of a string to upper
 * @n: string to be changed
 * Return: capitialized string
 */

char *string_toupper(char *n)
{
	int c;

	for (c = 0; n[c] != '\0'; c++)
	{
		if (n[c] >= 'a' && n[c] <= 'z')
			n[c] = n[c] - 32;
	}

	return (n);
}
