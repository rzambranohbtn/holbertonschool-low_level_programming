#include "holberton.h"
/**
 *cap_string - convert capitalice
 *@s: string
 *Return: Capitalize
 */
char *cap_string(char *s)
{
	int i = 0;
	int y = 0;
	char sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	int len_sp = 13;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			else
			{
				for (y = 0; y < len_sp; y++)
				{
					if (s[i - 1] == sep[y])
						s[i] -= 32;
				}
			}
		}
		i++;
	}
	return (s);
}
