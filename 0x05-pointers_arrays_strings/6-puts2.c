#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string containing the charcters
 */
void puts2(char *str)
{

	int c = 0;
	int len = 0;

	while (str[c++])
		len++;
	for (c = 0; c < len; c += 2)
		_putchar(str[c]);

	_putchar('\n');
}

