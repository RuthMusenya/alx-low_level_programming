#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Entry point
 * Description: get the last digit of a number
 * Return: Always (success)
 */

int main(void)

{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (ld > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n);
	}
	else if (ld == 0)
	{
		printf("last digit of %d is %d and is 0\n", n);
	}
	else
	{
		printf("last digit of %d is %d and less than 6 and no 0\n", n);
	}
	return (0);
}
