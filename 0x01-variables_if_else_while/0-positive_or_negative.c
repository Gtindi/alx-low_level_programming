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

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
puts("%d is Positive", n);
else if (n > 0)
puts("%d is Positive", n);
else
puts("%d is Negative", n);
return (0);
}
