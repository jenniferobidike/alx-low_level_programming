#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mun;
	char *ext;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mun = malloc(size * nmemb);

	if (mun == NULL)
		return (NULL);

	ext = mun;

	for (i = 0; i < (size * nmemb); i++)

		ext[i] = '\0';

	return (mun);
}
