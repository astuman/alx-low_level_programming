#include <unistd.h>
/**
 * _putchar -writes the character c to stdout
 * @c: The character t print
 *
 * Return: on success 1.
 * on error, -1
 */
int putchar(char c)
{
return (write(1, &c, 1));
}
