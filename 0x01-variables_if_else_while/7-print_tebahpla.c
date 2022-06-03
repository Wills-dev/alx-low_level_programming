#include <stdio.h>

/**
 * main - print alphabets in lowercase starting from z
 * followed by a new line
 * Return: 0 successfully
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
