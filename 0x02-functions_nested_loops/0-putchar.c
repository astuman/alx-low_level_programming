#include "main.h"

/**
 * main-main block
 * Description: print putchar in new line
 * Return: the program returns 0
 */
int main(void)
{
char ermias[] = "_putchar";
int c;
for (c = 0; c < 8; c++)
{
_putchar(ermias[c]);
}
putchar('\n');

return (0);
}
