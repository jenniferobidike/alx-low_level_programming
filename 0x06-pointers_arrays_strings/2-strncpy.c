#include "main.h"

/**
 * _strncpy - Copies a string.
 *
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: the maximum nuber of bytes to be copied
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	int c = 0, src_len = 0;

	while (src[c++])
		src_len++;

	for (c = 0; src[c] && c < n; c++)
		dest[c] = src[c];

	for (c = src_len; c < n; c++)
		dest[c] = '\0';

	return (dest);
}
