#include "main.h"

/**
 * more_numbers - print 0 to 14 into 10 places
 * Return: 0
 */
void more_numbers(void)
{
	char n;
	char m;

	for (n = 0;  n < 10; n++)
	{
		for (m = '0'; m <= '14'; m++)
		{
			if (m / 10 > 0)
			{
			_putchar((m / 10) + '0');
		}
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
