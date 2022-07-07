#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - function the returns the length of s tring
 *
 * @s: char variable to find length
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
