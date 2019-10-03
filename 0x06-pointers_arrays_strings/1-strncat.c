#include "holberton.h"
/**
 *_strncat - concat with n
 *@dest: destination
 *@src: origin
 *@n: integer
 *Return: pointer concat
 */
char *_strncat(char *dest, char *src, int n)
{
	int leng = 0;
	int pos = 0;

	while (dest[leng] != '\0')
	{
		leng++;
	}

	for (pos = 0; pos < n && src[pos] != '\0'; pos++, leng++)
	{
		*(dest + leng) = *(src + pos);
	}
	*(dest + leng) = '\0';
	return (dest);
}
