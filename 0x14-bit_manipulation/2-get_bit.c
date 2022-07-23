#include "main.h"

/**
 * get_bit - Gets the value of bit at a given index
 * @n: the bit
 * @index: the index to get the value at - indices start at 0
 * Return: if an error occurs return -1
 */

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned int bits;

	bits = (n >> index) & 1;

	if ((bits == 1) || (bits == 0))
		return (bits);

	else

		return (-1);

}
