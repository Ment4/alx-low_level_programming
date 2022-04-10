/*
 * File: 3-print_alphabets.c
 * Auth: Minte based on alx program
*/
#include <stdio.h>
/**
 * main - Prints the alphabet in lowecase, and then in uppercase.
 * 
 * Return: Always 0 (Success/correct)
*/
int main(void)
{
char lower_case;
char upper_case;

for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
{
putchar(lower_case);
}
for (upper_case = 'A'; upper_case <= 'Z'; letter++)
{
putchar(upper_case);
}

putchar('\n');

return (0);
}
