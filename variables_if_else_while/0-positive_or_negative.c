#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - this program will assign a random num the varia
 * Return: 0 is succes
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positif\n", n);	
	}
        else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}