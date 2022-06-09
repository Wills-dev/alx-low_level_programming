#include <stdio.h>
#include <math.h>

/**
 * main - find and prints the largest prime factor of the number
 * followed by new line
 * Return: 0
 */
int main(void)
{
	long int n, max, i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
		max = n;
	printf("%ld\n", max);

	return (0);
}
