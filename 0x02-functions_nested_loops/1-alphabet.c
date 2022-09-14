#include "main.h"
/* more headers goes there */

/**
 *print_alphabet - prints alphabet in lowercase to stdout
 *
 * Return: void
 */
void print_alphabet(void)
{
int start = 97;
int end = 97 + 26;

while (start < end)
{
_putchar(start++);
}
_putchar('\n');

}
