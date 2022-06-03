#include <stdio.h>

/**
 * main - a function that prints in lowercase except q and e
 * followed by a new line
 * Return: 0 successfully
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
