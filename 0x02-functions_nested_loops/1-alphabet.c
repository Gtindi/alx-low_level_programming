#include "main.h"
/* more headers goes there */

/**
 *print_alphabet - prints alphabet in lowercase to stdout
 *
 * Return: void
 */
void print_alphabet(void)
{
int alpha = 97;
int max = 97 + 26;

while (alpha < max)
{
_putchar(alpha++);
}
_putchar('\n');

}
