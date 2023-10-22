/*
 * 6-print_numberz.c
 */

#include <stdio.h>

/**
 * prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Aways 0.
 */
int main(void)
{
        int num;

        for (num = 0; num < 10; num++)
                putchar((num % 10) + '0');

        putchar('\n');

        return (0);
}
