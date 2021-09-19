#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints the length of a string
 * @s: pointer
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
	length += 1;
	s += 1;
	}
	return (length);
}
