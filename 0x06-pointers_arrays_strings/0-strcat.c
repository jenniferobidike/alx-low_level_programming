#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */

char *_strcat(char *dest, char *src)
{
	int c, n;

	for (c = 0; dest[c] != '\0'; c++)
	{
	}

	for (n = 0; (dest[c + n] = *src++) != '\0'; n++)
	{
	}

	return (dest);
}
