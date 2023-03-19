#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: All possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		n = putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
