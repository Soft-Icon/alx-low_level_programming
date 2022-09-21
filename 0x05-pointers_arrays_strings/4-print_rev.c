#include "main.h"
/**
 * print_rev - this funcion prints sets of characters(strings) in reverse order
 * @s: the pointer
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;
	int n;

	n = 0;
	while (s[n] != '\0')
		n+_+;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	p_putchar('\n');
}
			

