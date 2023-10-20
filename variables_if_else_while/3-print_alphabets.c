/*
 * File: 3-print _alphabets.c
 */

#include <stdio.h>

/**
* main - Program entry point
*
* Return: always 0 (success)
*/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);

putchar('\n');

return (0);
}
