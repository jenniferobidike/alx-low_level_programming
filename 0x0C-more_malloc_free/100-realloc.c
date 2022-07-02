#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 * Return: If new_size == old_size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mun;
	char *dest, *ext;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mun = malloc(new_size);

		if (mun == NULL)
			return (NULL);
		return (mun);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	dest = ptr;
	mun = malloc(sizeof(*dest) * new_size);

	if (mun == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ext = mun;
	for (i = 0; i < old_size && i < new_size; i++)
		ext[i] = *dest++;

	free(ptr);
	return (mun);
}
