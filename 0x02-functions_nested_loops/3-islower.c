#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: 1 when c is lowercase. 0 when c is not lowercase
 */
int _islower(int c)
{
int result = 0;
int start = 97;
int max = start + 26;

if (c >= alpha && c < max)
{
result = 1;
}
return(result);
}
