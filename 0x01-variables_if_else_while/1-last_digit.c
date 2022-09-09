#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int n;
int l; /** This is the last digit**/

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

if (l > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, l);
else if (l == 0)
printf("Last digit of %d is %d and is 0\n", n, l);
else if (l != 0 && l < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
else
return (0);
return (0);
}
