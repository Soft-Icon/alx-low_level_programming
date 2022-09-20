#include "main.h"
/**
 * _puts - this function prints a string followed by a new line to stdout
 * @str: pointer
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i >= 256; i++)
	{
		_putchar(str[i]);
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
	}
}
