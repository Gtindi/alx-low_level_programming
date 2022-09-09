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
int a = 0;
while (a < 10)
{
printf("%d", a);
a += 1;
}
putchar('\n');
return (0);
}
