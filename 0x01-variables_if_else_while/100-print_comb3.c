#include <stdio.h>

/**
 * main - a program that prints all possible different combinations of two digits
 * followed by a comma separating each digits
 * Return: 0 successfully
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; n <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(' ');
	Return (0);
}
