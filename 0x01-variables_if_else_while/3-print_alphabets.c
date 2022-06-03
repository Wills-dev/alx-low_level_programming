#include <stdio.h>

/**
 * main - a function that prints in lowercase and prints in uppercase
 * followed by a new line
 * Return: 0 sucessfully
 */
int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z' : ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
