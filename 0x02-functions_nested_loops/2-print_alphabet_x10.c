#include "main.h"
/**
 * print_alphabet_x10 - prints the  alphabete ten times
 *
 * Return:always 0
 *
 */
void print_alphabet_x10(void)
{
	int x;
	char j;

	for (x = 0 ; x <= 10 ; x++)
	{
		for (j = 'a'; j <= 'z';  j++)
			_putchar(j);
		_putchar('\n');
	}
}
