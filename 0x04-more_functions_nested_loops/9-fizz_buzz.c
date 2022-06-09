#include <stdio.h>

/**
 * main - prints number 1 - 10
 * if number % 3 divide 0 prints fizz
 * if number % 5 divide 0 prints buzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			prinf("Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else 
		{
			printf(" %d", i);
		}
	}
	print("\n");
}
