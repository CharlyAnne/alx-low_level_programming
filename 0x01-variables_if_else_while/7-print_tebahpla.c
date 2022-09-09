#include <stdio.h>
/**
 * main - Entry point
 * 
 * Description: 'output lower case letters in rivers using putchar'
 * Return: Always 0
 */
int main(void)
{
int ch = 'z';
for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');
return (0);
}
