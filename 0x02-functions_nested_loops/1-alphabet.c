#include "holberton.h"
/**
*print_alphabet - Alphabet
*Return: 0 for sucessfull
*/
void print_alphabet(void)
{	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
