#include "holberton.h"
/**
 *_strcpy - copy line
 *@dest: pointed by dest
 *@src: source
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		if (src[index + 1] == NULL)
			dest[index + 1] = src[index + 1];
		index++;
	}
	return (dest);
}
