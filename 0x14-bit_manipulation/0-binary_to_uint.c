#include "main.h"

/**
 *binary_to_uint - convert a binary number to unsigned int
 *@b: string contains the binary number
 *Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int ou = 0;

if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
ou = 2 * ou + (b[i] - '0');

}

return (ou);
}
