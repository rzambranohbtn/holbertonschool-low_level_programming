#include "holberton.h"
/**
 *print_triangle - triangle
 *@size: size
 */
void print_triangle(int size)
{
	int pos;
	int space;

	if (size <= 0)
		_putchar('\n');
	for (pos = 0; pos < size; pos++)
	{
		for (space = 0; space <= size; space++)
		{
			if (space <= (size - pos - 1))
				_putchar(' ');
			else
				_putchar('#');
		}
	_putchar('\n');
	}
}
