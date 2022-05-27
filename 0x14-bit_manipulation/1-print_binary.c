#include "main.h"

/**
 *print_binary - printing the binary equivalent of decimal number
 *@n: hold unsigned int
 **/

void print_binary(unsigned long int n)
{
int x, cc = 0;

unsigned long int current;

for(x = 63; x >= 0; x--)
{
current = n >> x;

if (current & 1)
{
_putchar('1');
cc++;

}
else if (cc)
_putchar('0');

}
if (!cc)
_putchar('0');

}
