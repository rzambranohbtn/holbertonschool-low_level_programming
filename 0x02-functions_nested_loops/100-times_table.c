#include "holberton.h"
/**
 *print_times_table - n times table
 *@n: n times
 *Return:int
*/
void print_times_table(int n)
{
	int x;
	int y;
	int mul;
	int first;
	int second;
	int third;

	if (n>0 && n<15)
	for (x = 0; x <= n; x++)
	{
		_putchar('0');
		for (y = 1; y <= n; y++)
		{
			mul = x * y;
			first = mul % 10;
			second = (mul / 10) % 10;
			third = (mul / 10) / 10;
			_putchar(',');
			_putchar(' ');
			if (mul >= 100)
			{
				_putchar(third + '0');
				_putchar(second + '0');
				_putchar(first + '0');
			}
			else if (mul > 9 && mul < 100 )
			{
				_putchar(second + '0');
				_putchar(first + '0');
			}
			else
			{
				_putchar(first + '0');
			}
		}
		_putchar('\n');
		_putchar(' ');
	}
}
