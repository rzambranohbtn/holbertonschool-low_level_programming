#include <unistd.h>
/**
*main - initial point
*Return: 1 for sucessfull
*with proper
*/
int main(void)
{
char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, text, sizeof(text) - 1);
return (1);
}
