/*
 * File: 8-print_base16.c
 * Auth: Minte
 */
#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Description: Write the program the output is base 16
 * Return: 0
 */
int main(void)
{
char x;

for (x = '0'; x <= '9'; ++x)
putchar(x);
for (x = 'a'; x <= 'f'; ++x)
putchar(x);

putchar('\n');

return (0);
}
