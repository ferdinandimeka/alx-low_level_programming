#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes it with a specific char
 * @size: size of array in memory
 * @c: memory contents
 *
 * Return: Success
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
	return (NULL);
	}
	i = 0;
	while (i < size)
	{
	s[i] = c;
	i++;
	}
	return (s);
}