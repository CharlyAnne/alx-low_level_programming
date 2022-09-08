/*
 * File: 6-size.c
 * Auth: CharlyAnnne
 */
#include <stdio.h>
/**
 * main - print to screen
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of a int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
