#include "holberton.h"
/**
 *_strncpy - copy a string
 *@dest: destination
 *@src: origin
 *@n: integer
 *Return: pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int pos = 0;

	for (pos = 0; pos < n && src[pos] != '\0'; pos++)
	{
		*(dest + pos) = *(src + pos);
	}
	for ( ; pos < n; pos++)
	{
		*(dest + pos) = '\0';
	}
	return (dest);
}
