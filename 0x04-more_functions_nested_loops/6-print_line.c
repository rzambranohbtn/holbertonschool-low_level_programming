#include "holberton.h"
/**
 *print_line - print line
 *@n: integer
 */
void print_line(int n)
{
	int pos;

	for(pos = 0; pos < n; pos++)
		_putchar('_');
	_putchar('\n');
}
