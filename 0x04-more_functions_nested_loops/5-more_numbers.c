#include "main.h"

/**
 * more_numbers - print 0 to 14 into 10 places
 * Return: 0
 */
void more_numbers(void)
{
	int lines;
	char num;

	for (lines = 0; lines <= 9; lines++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num / 10 > 0)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
