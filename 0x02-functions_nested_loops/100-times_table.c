#include <stdio.h>
#include "holberton.h"
/**
 * times_table -prints tables
 *
 * Return: Always 0.
 */
int main(void)
{
int i, j, res;
if(!(n < 15 || n < 0))
{
for(i = 0; i <= n; i++)
{
for(j = 0; j <= n; j++)
{
res = (j * i);
if(j != 0)
{
_putchar(", ");
_putchar(" ");
}
if(res < 10 && j != 0)
_putchar(" ");
_putchar(" ");
_putchar(res % 10 + '0');
}
else if(res > 10 && res < 100)
{
_putchar(' ');
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else if(res > 100 && j != 0)
{
_putchar((res / 100) + '0');
_putchar((res / 10) % 10 + '0');
_putchar((res % 10) + '0');
}
else
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
}
