#include <stdio.h>
/**
*main- size of various types
*on the computer
*
*Return: 0 for success
*/
int main (void)
{
printf("\nSize of a char: %d byte(s)",sizeof(char*));
printf("\nSize of an int: %d byte(s)",sizeof(int*));
printf("\nSize of a long int: %d byte(s)",sizeof(long int*));
printf("\nSize of a long long int: %d byte(s)",sizeof(long long int*));
printf("\nSize of a float: %d\n byte(s) byte(s)",sizeof(float*));
return(0);
}
