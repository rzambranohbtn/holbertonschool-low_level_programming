#include "holberton.h"
/**
 *more_numbers - more
 */

void more_numbers(void)
{
	char x;
	char y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y <= 9)
			{
				_putchar(y + '0');
			}
			else
			{
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
