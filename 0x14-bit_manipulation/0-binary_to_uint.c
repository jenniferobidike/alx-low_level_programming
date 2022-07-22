#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int len = 0;
	int x;

	while (b)
	{

		for (x = 0; b[x] != '\0'; x++)
		{

			if (b[x] == '1')
				len = len * 2 + 1;

			else if (b[x] == '0')
				len *= 2;

			else
				return (0);

		}
		return (len);

	}

	return (0);

}
