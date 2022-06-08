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
			if (j == 0)
			{
				_putchar(p + '0');
			}
			else
			{
				if (multiply < 10)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(p + '0');
				}
				else
				{
					_putchar(',');
					_putchar(32);
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0';
				}
			};
		}
		_putchar('\n');
	}
}
