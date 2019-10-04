#include "holberton.h"
/**
 *_strcat - concat
 *@dest: destination
 *@src: origin
 *Return: pointer concat
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[y] != '\0')
	{
		y++;
	}


	for (x = 0; src[x] != '\0'; x++, y++)
	{
		dest[y] = src[x];
	}
	return (dest);
}
