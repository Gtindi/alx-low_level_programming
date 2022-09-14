#include "main.h"
/* more headers goes there */

/**
 *print_alphabet - prints alphabet in lowercase to stdout
 *
 * Return: Always 0
 */
int main(void)
{
int alpha = 97;
int max = 97 + 26;

while (alpha < max)
{
_putchar(alpha++);
}
_putchar('\n');
return (0);
}
