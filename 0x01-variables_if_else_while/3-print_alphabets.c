#include <stdio.h>
/**
 * main - Entry point
 * Description: output letters in small and capital letters
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
char upper_ch = 'A';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (upper_ch = 'A'; upper_ch <= 'z'; upper_ch++)
putchar(upper_ch);
putchar('\n');
return (0);
}
