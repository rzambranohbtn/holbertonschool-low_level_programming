#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 successful
 */

int main(void)
{
	unsigned long t, num;

	num = 612852475143;

	for (t = 3; t < num; t++)
	{
		if (num % t == 0)
			num /= t;
	}

	printf("%lu\n", num);

	return (0);
}
