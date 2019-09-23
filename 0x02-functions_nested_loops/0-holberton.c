#include "holberton.h"
/**
*main - Holberton
*Return: 0 for sucessfull
*/
int main(void)
{
	int x;
	char letra;
	char array[] = "Holberton\n";

	for (x = 0; x <= 9; x++)
	{
		letra = array[x];
		_putchar(letra);
	}
	return (0);
}
