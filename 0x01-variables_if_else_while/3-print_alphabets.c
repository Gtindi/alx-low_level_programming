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
char lc = 'a';
char uc = 'A';
int len_lc = lc + 26;
int len_uc = uc + 26;

while (lc < len_lc)
{
putchar(lc++);
}
while (uc < len_uc)
{
putchar(uc++);
}

putchar('\n');
return (0);
}
