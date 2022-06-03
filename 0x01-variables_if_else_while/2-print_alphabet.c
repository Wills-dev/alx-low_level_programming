#include <stdio.h>

/**
 * main - print alphabets in lowercase
 * followed by a new line
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
