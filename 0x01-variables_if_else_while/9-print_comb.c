#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 * followed by new line
 * Return: 0 successfully
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
