#include <stdio.h>
/**
 * main - print all numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i = '0';
char ch = 'a';
for (i = '0'; i <= '9'; i++)
putchar(i);
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
