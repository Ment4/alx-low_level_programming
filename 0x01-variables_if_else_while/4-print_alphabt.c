/**
* File: 4-print_alphabt
* Auth: Minte
*/
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
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
