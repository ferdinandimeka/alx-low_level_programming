#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; i < 10; i++)
	{
	_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
