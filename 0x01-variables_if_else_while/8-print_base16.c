#include <stdio.h>

/**
 * main - base 16 numbers in lowercase
 * Description: prints all base 16 numbers in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
	putchar((ch % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
