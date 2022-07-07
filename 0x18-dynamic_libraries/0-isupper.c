#include "main.h"

/**
 * _isupper - Its a function that checks for uppercase letters
 * @c: character to check
 *
 * Return: 0 if caracter is lowercase or 1 if caracter is uppercase
 */


int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
