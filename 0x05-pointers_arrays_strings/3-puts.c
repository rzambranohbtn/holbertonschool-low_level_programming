#include "holberton.h"
/**
 *_puts - entry char
 *@str: string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
