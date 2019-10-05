#include "holberton.h"
/**
 *_strcmp - res
 *@s1: string1
 *@s2: string2
 *Return: rest of string
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		res = s1[i] - s2[i];
		if (res != 0)
			break;
	}
	return (res);
}
