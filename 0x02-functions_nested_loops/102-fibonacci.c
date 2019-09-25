#include <stdio.h>

/**
 * main - Finds and prints first 50 fibonacci numbers
 * Return: 0
 **/

int main(void)
{
	long n1, n2, fib_n;
	int count;

	n1 = 0;
	n2 = 1;
	count = 0;

	for (count = 0; count < 50; count++)
	{
		fib_n = n1 + n2;
		n1 = n2;
		n2 = fib_n;

		if (count != 49)
		{
			printf("%ld, ", fib_n);
		}
		else
			printf("%ld\n", fib_n);
	}
	return (0);
}
