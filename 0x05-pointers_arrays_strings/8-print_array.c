#include "holberton.h"
#include <stdio.h>
/**
 *print_array - print
 *@a: int1
 *@n: int2
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != n - 1)
			printf(", ");
	}
	printf("\n");
}
