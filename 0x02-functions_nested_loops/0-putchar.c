#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char ch[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
	_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
