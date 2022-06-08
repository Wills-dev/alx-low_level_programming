#include <stdio.h>

/**
 * main - prints fibonacci numbers less or equal to 50
 * Return: zero successfully
 */
int main(void)
{
	long int i, j, k, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", j);
		sum = j + k;
		j = k;
		k = sum;
		if (i == 48)
		{
			printf("%ld\n", j);
		}
	}
	return (0);
}
