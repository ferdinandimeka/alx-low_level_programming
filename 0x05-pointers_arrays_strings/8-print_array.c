#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array of integer
 * @a: first pointer value
 * @n: second value
 *
 * Return: array element
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (i != 0)
	{
	printf(", ");
	}
	if (a[i] != '\0')
	{
	printf("%i", a[i]);
	}
	}
	_putchar('\n');
}
