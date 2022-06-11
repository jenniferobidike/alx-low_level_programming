#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed
 */

void print_diagonal(int n)
{
	int line, nal;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (nal = 0; nal < line; nal++)
				_putchar(' ');
			_putchar('\\');

			if (line == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
