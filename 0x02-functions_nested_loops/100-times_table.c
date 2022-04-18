#include "main.h"
/**
 * times_table -prints tables
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
int a;
int b;
int c;
for (a = 0; a <= 100; a++)
{
for (b = 0; b <= 100; b++)
{
c = a * b;
if ((c / 100) == 0)
{
if (b == 0)
{
_putchar ('0');
}
if (b != 0)
{
_putchar (' ');
_putchar ((c % 100) + '0');
}
if (b < 99)
{
_putchar(',');
_putchar (' ');
}
}
else
{
_putchar ((c / 100) + '0');
_putchar ((c % 100) + '0');
if (b < 99)
{
_putchar(',');
_putchar (' ');
}
}
}
_putchar ('\n');
}
}
