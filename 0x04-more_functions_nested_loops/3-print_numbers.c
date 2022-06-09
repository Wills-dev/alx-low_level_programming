#include "main.h"

/**
 * print_numbers - prints number 0 to 9
 * Return: 0 successfully
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
