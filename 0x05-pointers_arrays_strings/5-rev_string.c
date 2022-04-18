#include "main.h"
/**
 * rev_string - prints a reverse string
 *@s: A pointer to an int that will be changed
 *
 *Return: void
 */
void rev_string(char *s)
{
char *s[10] = "My School";

    printf("%s\n", *s);
    rev_string(*s);
    printf("%s\n", *s);
    return (0);
}
