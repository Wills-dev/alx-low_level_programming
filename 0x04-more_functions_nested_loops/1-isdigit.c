#include "main.h"

/**
 * _isdigit - check for a digit.
 * @c: input
 * Return: 1 if c is a git
 * 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
