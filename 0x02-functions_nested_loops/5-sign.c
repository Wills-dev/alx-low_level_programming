#include "main.h"

/**
 * print_sign - function that prints the sign of a numbe1~
 * @n: input number
 * Description: print the sign of a number
 * Return: 1 if number is positive
 * 0  if number is zero and -1 if number is negative
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
