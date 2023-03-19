#include <stdio.h>

/**
 * main - entry point
 * Description: Print alfabets in lower case
 * Return: Always (success)
 */

int main(void)

{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (m <= 90)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
