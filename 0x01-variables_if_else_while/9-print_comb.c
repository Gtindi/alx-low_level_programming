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
int i = 0;
while (i < 10)
{
putchar(i + '0');

if (i + 1 != 10)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
