/*
 * File: 7-print_tebahpla.c
 */

#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
