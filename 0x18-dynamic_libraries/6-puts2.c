#include "main.h"
/**
 * _puts - Prints out every other char of the string.
 * @s: input string to print.
 */
void _puts(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (i % 2 == 0)
putchar(s[i]);
i++;
}
putchar('\n');
}
