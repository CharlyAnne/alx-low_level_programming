#include <studio.h>
/**
 * main - computes and print sum of all multiples of 3 and 5 below 1024
 *
 * i: Integer
 * r: Result
 * Return: On success 1.
*/
int main(void)
{
int i;
long a = 1, b = 2, r = 0;
printf("1, 2");
for (i = 1; i <= 48; i++)
{
r = a + b;
a = b;
b = r;
printf(", %ld", r);
}
putchar('\n');
return (0);
}
