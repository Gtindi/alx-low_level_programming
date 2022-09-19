/**
 * swap_int - Swaps the values of two integers.
 * @a: The first number to be swapped
 * @b: The second number to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
