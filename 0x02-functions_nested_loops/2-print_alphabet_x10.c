#include "main.h"

/**
 * print_alphabet_x10 - print lower case letters x10
 */

void print_alphabet_x10(void)
{

	char alpha;
	int count = 0;

	while (count++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);

		_putchar('\n');
	}
}

