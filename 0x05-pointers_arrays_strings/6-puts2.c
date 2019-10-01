#include "holberton.h"
/**
 *puts2 - function print 2 to 2
 *@str: string
 */
void puts2(char *str)
{
	int counter, x;
	counter=0;
	x=0;

	while (str[counter] != '\0')
		counter++;

	for (x=0; x<counter; x+=2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');

}
