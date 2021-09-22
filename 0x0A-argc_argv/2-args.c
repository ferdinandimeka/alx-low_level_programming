#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments in the command line
 * @argv: an array containing the command line arguments
 *
 * Return: Always (Success)
 */
int main(int argc, char *argv[])
{
	int i;

        for (i = 0; i < argc; i++)
        {
        printf("%s\n", argv[i]);
        }
	return (0);
}
