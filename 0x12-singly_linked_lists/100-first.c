#include <stdio.h>
void print(void)__attribute__((constructor));
/**
 * main - Entry point
 *
 * Return: string value
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back\n");
}
