#include "holberton.h"
/**
 *rev_string - entry
 *@s: string
 */
void rev_string(char *s)
{
	int counter, length, x, y;
	char tmp[100];

	y = 0;
	counter = 0;

	while (s[counter] != '\0')
		counter++;
	length = counter;

	for (x = length - 1; x >= 0; x--)
	{
		tmp[y] = s[x];
		y++;
	}

	for (y = 0; y < length; y++)
	{
		s[y] = tmp[y];
	}
}
