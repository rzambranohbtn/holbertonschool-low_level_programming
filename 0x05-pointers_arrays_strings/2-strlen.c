#include "holberton.h"
/**
 *_strlen - length
 *@s: char
 *Return: Always 0
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;

	while (s[counter] != '\0')
		counter++;
	return (counter);
}
