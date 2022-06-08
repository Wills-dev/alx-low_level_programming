#include "main.h"

/**
 * times_table - it prints 9 times table starting 0
 * Return: zero
 */
void times_table(void)
{
	int i, j, multiply;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multiply = i * j;
			if ((multiply / 10) == 0)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(multiply + '0');
				else if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
