#include "holberton.h"
/**
 *_islower - islower
 *@c: character
 *Return: 1 lower
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
