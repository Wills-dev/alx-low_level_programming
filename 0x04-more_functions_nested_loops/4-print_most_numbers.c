#include "main.h"

/**
 * print_most_numbers - prints number from 0 -9
 * except 2 and 9
 * Return: 0
 */
void print_most_numbers(void)
{
	char n = '0';
	
	while ( n <= '9')
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}
