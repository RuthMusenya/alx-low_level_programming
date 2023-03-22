 #include <stdio.h>

/**
 * main - entry point
 * Description: prints _putchar, followed by a new line
 * Return: 0 (success)
 */

int main(void)

{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
return (0);
}


