#include "holberton.h"
/**
 *times_table - description 9 x 9
 *Return:void
*/

void times_table(void)
{
	int x;
	int y;
	int mul;
	int first;
	int second;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		for (y = 1; y <= 9; y++)
		{
			mul = x * y;
			first = mul / 10;
			second = mul % 10;
			_putchar(',');
			_putchar(' ');
			if (first == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(first + '0');
			}
			_putchar(second + '0');
		}
		_putchar('\n');
	}
}
