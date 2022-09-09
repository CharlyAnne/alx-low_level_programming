#include <stdio.h>

/**
 * main - Entry point
 * Description : output alphabet except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
if ((ch != 'q') && (ch != 'e'))
putchar(ch);
putchar('\n');
return (0);
}
