/*
 * File: 2-print_alphabet.c
 * Auth: CharlyAnne
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: zero (0)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

		putchar('\n');

	return (0);
}
