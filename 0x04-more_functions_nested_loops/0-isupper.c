#include "main.h"

/**
 * _isupper - prints upper case
 * @c: Return 1 if c is uppercase
 * Return: 0 if otherwise
 */
int _isupper(int c);
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
