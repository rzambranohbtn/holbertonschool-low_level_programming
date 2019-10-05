#include "holberton.h"
/**
 *_strcmp - res
 *@s1: string1
 *@s2: string2
 *Return: rest of string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int rest;

	if ((s1[i] != '\0' && s2[i] != '\0') || (s1[i] != s2[i]))
	{
		rest = s1[i] - s2[i];
	}
	i++;

	return (rest);
}
