#include "holberton.h"
/**
 *print_square - square
 *@size: entry
 */
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
		_putchar('\n');

	for (x = 1; x <= size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
