#include "holberton.h"
/**
 *print_rev - rev entry char
 *@str: string
 */
void print_rev(char *str)
{
	int counter, length, x;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	length = counter;

	for (x = length - 1; x >= 0; x--)
		_putchar(str[x]);
	_putchar('\n');
}
