#include <stdio.h>
#include <ctype.h>
/**
*main - initial point
*Return: 0
*patience
*/
int main(void)
{	int i, j;
	i = 48;
	j = 48;
	while (i < 58)
	{
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i != 57 ||  j != 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;

		}
		j = 48;
		i++;
	}
	putchar('\n');
	return (0);
}
