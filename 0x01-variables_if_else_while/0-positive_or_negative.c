#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if(n>1){
printf("%n is positive\n", n);
}
else if (n<0){
printf("%n is negative\n", n);
}
else{
	printf("%n is zero\n", n);
}
	return (0);
}
