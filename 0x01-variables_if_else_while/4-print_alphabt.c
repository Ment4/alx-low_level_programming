/**
* File: 4-print_alphabt
* Auth: Minte
*/
#include <stdio.h>

/**
 * main - Entry point
 * Description: Write alphabet in lowercase
 * Return: Always 0 (Success/correct)
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
