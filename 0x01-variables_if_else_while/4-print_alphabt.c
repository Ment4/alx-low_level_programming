#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Print lowercase alphabet excluding e and q
 * Return: 0
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;
else if (alphabet == 'e')
continue;
putchar(alphabet);
}
putchar('\n');

return (0);
}
