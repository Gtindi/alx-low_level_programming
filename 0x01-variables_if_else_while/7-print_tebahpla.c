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
char character;
char ch = 'a';
int len = ch + 26;

while (ch < len)
{
character = ch++;
gets(s);
strrev(s);
putchar(character, s);

}
putchar('\n');
return (0);
}
