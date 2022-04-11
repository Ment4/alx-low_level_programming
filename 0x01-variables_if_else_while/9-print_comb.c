/*
 * File: 9-print_comb.c
 * Auth: Minte
 */
#include <stdio.h>
/**
 * main - Prints all possible combinations of single_digit numbers.
 * Description: Write combinations of single_digit
 * Return: 0
 */
int main(void)
{
int c = 0;

while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
