#include "main.h"
/**
 * main - main block
 * Description: Print _putchar in a new line
 * Return: 0
 */
int main(void)
{
char x[] = "_putchar";
int k;
for (k = 0; k < 8; k++)
{
_putchar(x[k]);
}
_putchar('\n');
return (0);
}
