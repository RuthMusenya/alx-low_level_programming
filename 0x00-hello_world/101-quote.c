#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints out the last part of a quote in the standard error.
 * Return: 1 (success)
 */
int main(void)
{
char stri[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, stri, 59);
return (1);
}
