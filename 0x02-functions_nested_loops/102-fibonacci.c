#include "stdio.h"

/**
*main: all action is doing
*
*Return: always 0
*/
int main(void)
{
unsigned long count, i, j, k;
i = 0;
j = 1;

for (count = 0; count < 50; count++)
{
k = i + j;
i = j;
j = k;

printf("%lu", k);
if (count == 49)
{
printf("\n");
}
else
{
printf(", ");
}
}
return (0);
}
