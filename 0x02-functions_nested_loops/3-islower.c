#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: The character to check if is lowercase
 *
 * Return: 1 when c is lowercase. 0 when c is not lowercase
 */
int _islower(int c)
{
int result = 0;
int start = 97;
int max = start + 26;

if (c >= start && c < max)
{
result = 1;
}
return (result);
}
