/*
 * File: 7-print_tebahpla.c
 * Auth: Minte
 */
#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Description: print lowercase alphabet backwards
 * Return: 0
 */

int main(void)
{
char c;

for (c = 'z'; c >= 'a'; --c)
putchar(c);

putchar('\n');

return (0);
}
