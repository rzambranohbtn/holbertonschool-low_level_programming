#include "holberton.h"
/**
 *more_numbers - more
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			_putchar(y <= 9 ? (y + '0') : (y / 10) + '0');
		if (y >= 10)
			_putchar(y % 10 + '0');
		}
	_putchar('\n');
	}
}
