#include "main.h"
/* more headers goes there */

/**
 *print_alphabet - prints alphabet in lowercase to stdout
 *
 * Return: void
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
}
