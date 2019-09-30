#include "holberton.h"
/**
 *swap_int - swap a and b
 *@a: int a
 *@b: int b
 */
void swap_int(int *a, int *b)
{
	int atm = *a;
	int btm = *b;
	*a = btm;
	*b = atm;
}
