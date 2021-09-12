#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	*a = *b + *a;
	*b = *a - *b;
	*a = *a - *b;
}

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of element to swap
 *
 * Return: string value.
 */
void reverse_array(int *a, int n)
{
	int rev = 0;

	while (rev < n /2)
	{
	swap_int(a + rev, a + (n - rev -1));
	rev++;
	}
}
