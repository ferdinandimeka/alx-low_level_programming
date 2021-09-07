#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers and prints them
 * @a: first pointer value
 * @b: second pointer value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int ch;

	ch = *a;
	*a = *b;
	*b = ch;
}
