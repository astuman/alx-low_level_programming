#include <stdio.h>
/**
*main -Entry
*
*Return: Always 0 (Success or correct)
*/
int main(void)

{
char alphabet;

for (alphabet = 122; alphabet <= 97; alphabet--)
{
putchar(alphabet);
}

putchar ("\n");

return (0);
}
