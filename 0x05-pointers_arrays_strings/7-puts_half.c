#include "holberton.h"
/**
 *puts_half - function print odd
 *@str: string
 */
void puts_half(char *str)
{
	int counter, x, n;
	counter=0;
	x=0;
	n=0;

	while (str[counter] != '\0')
		counter++;

	if ((counter % 2) == 0)
		n = counter / 2;

	else
		n = (counter - 1) / 2;

	for (x=n; x<counter; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');

}
