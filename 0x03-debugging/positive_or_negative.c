#include "main.h"

/**
* positive_or_negative - function that prints either  positive or negative
* @i: parameter i
* Return: Always Success
*
*/

void positive_or_negative(int i)

{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
