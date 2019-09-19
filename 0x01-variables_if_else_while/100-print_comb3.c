#include <stdio.h>
#include <ctype.h>
/**
*main - initial point
*Return: 0
*inventing
*/
int main(void)
{
	int x, y;

	for (x = 48, y = 49; x < 58; x++)
	{
		while (y < 58)
		{
			if (x != y)
			{
				if (y > x)
				{
					putchar(x);
					putchar(y);
					if (x < 56)
			{
						putchar(',');
						putchar(' ');
					}
				}
			}
			y++;
		}
		y = 49;
	}
	putchar('\n');
	return (0);
}
