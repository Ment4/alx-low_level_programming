/*
 * File: 5-print_numbers.c
 * Auth: Minte
 */
#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
putchar("%d", i);

putchar("\n");

return (0);
}
