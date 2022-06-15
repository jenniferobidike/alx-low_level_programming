#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */

void puts_half(char *str)
{

	int c = 0, len = 0, n;

	while (str[c++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (c = n; c < len; c++)
		_putchar(str[c]);

	_putchar('\n');
}
