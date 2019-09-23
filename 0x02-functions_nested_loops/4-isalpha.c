#include "holberton.h"
/**
 *_isalpha - is a letter, lowercase or uppercase
 *@c: character
 *Return: 1 lower
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
