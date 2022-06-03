#include <stdio.h>

/**
 * main - print base 16 in lower case
 * followed by new line
 * Return: 0 successfully
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
