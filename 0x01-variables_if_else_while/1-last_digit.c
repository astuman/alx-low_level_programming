#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - prints all possible combination of three different digits
 *
 * description - prints a number
 * last digit is 0, greater than 5 or less than 6
 * more headers goes there
 * betty style doc for function main goes there
 * Return always 0
 **/
int main(void)
{
int n;

if (n % 10 > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);

}
else if (n % 10 == 0)
{
printf("Last digit of %i is %i and is 0\n", n, n % 10);
}

else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
}

return(0);
}
