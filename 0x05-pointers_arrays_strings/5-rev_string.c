#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer to string to be reversed
 *
 * Return: always void
*/
void rev_string(char *s)
{
int i, j, k, temp;

i = 0;
while (s[i] != '\0')
{
i++;
}
k = 0;
j = i - 1;

while (k < j)

{
temp = s[k];
s[k] = s[j];
s[j] = temp;
k++;
j--;
}
}
