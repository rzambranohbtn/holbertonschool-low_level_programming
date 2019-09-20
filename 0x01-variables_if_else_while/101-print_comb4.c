#include <stdio.h>
#include <ctype.h>
/**
*main - initial point
*Return: 0
*comb4
*/
int main(void)
{	int x;
	int y;
	int z;
	x = 48;
	y = 49;
	z = 50;
	while (x < 58)
	{
		while (y < 58)
		{
			while (z < 58)
			{
				if (x != y && x != z && y != z && x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56 || z != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			z = 48;
			y++;
		}
		y = 48;
		x++;
	}
	putchar('\n');
	return (0);
}
