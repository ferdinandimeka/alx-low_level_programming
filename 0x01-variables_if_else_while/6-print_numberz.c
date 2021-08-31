#include <stdio.h>

/**
 * main - all single digits 
 * description: Prints from 0 to 9
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
	putchar(num + '0');
	putchar('\n');
	return (0);
}
