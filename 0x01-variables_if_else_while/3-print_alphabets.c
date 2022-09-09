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
char lc = "a" + 26;
char uc = "A" + 26;
int len_lc = lc + 26;
int len_uc = uc + 26;

while (lc < len)
{
putchar(lc++);
}
while (uc < len)
{
putchar(uc++);
}

putchar('\n');
return (0);
}
