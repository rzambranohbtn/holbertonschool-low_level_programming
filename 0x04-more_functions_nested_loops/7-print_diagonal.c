#include "holberton.h"
/**
 *print_diagonal - print
 *@n: number of times
 */

void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
		_putchar(' ');
		}
	_putchar(92);
	_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
