#include <stdio.h>
/**
  * main - Entry Point and also prints alpabets
  *
  * Return: 0 if success
  */

int main(void)
{

	int i;
	char alphabets_lower[26] = "abcdefghijklmnopqrstuvwxyz";
	char alphabets_upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


	i = 0;
	for (; i < 26;)
	{
		putchar(alphabets_lower[i]);
		i++;
	}

	i = 0;
	for (; i < 26;)
	{
		putchar(alphabets_upper[i]);
		i++;
	}


	putchar('\n');
	return (0);
}
