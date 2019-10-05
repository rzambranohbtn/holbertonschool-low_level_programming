#include "holberton.h"
/**
 *_strcpy - copy line
 *@dest: pointed by dest
 *@src: source
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';

	return (dest);
}
