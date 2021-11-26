#include "main.h"

/**
 * main - print numbers from 0 to 9 omitting 2 and 4.
 * @c: integers
 * Return: 0.
 */
void print_most_numbers(void)
{
	char c;

        while (c <= '9')
	{
	while ((c != '2') && (c != '4'))
	{
	_putchar(c);
	}
	c++;
	}
	_putchar('\n');
}
