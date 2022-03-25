#include "main.h"

/**
 * print_last_digit - print the last digit of an integer
 * @digit: number to be printed
 *
 * Return: Value of last digit
 */

int print_last_digit(int digit)
{
	int last_digit = digit % 10;
	{
	if (last_digit < 0)
		last_digit = (-1 * last_digit);
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
