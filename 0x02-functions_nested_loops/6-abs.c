#include "holberton.h"
/**
 *_abs - absolute valor
 *@c - valor entry
 *Return: abs
 */

int _abs(int c)
{	int abs;
	if (c < 0)
	{
		abs = -1 * c;
		return (abs);
	}
	else
	{
		abs = c;
		return (abs);
	}
}
