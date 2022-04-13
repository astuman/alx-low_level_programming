#include "main.h"

/**
*print alphabetic -10 times print alphabetic lowercase
*
*_putchar - putchar alphabet 10 times
*/
void print_alphabet_x10(void)
{
char alphabet;
int i;
for (i = 0; i <= 10; i++)
{

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
return (0);
}
