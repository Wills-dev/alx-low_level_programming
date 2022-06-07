#include "main.h"

/**
 * print_last_digit - function prints the last digit of a numberit of a number
 * @r: integer input
 * Return: last digit
 */
int print_last_digit(int)
{
	int n;

	if (r < 0)
	{
		n = -1 * (r % 10);
	}
	else
	{
		n = r % 10;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
