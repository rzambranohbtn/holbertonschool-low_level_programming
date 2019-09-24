#include "holberton.h"
/**
 * print_last_digit - prints the last digit
 * @a: number
 * Return: last
 */
int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (last <= 0)
		last = -1 * last;
	_putchar(last + '0');

	return (last);
}
