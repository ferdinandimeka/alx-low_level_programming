#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int n;
int *p;
int a[5];

a[2] = 1024;
p = &n;
/*
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */
*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);/* ..so that this prints 98\n */
return (0);
}
