#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: always 0.
 */
void print_alphabet(void)
{
	char c[] = "_abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 27;)
	{
	i++;
	_putchar(c[i]);
	}
	_putchar('\n');
}
