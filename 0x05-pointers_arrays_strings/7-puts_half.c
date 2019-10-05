#include "holberton.h"
/**
 *puts_half - function print odd
 *@str: string
 */
void puts_half(char *str)
{
	int len = 0;
	int x;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		for (x = len / 2; x < len; x++)
		{
			_putchar(str[x]);
		}
	}
	else
	{
		for (x = (len / 2) + 1; x < len; x++)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');

}
