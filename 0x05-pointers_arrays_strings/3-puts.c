#include "main.h"
/**
 * _puts - this function prints a string followed by a new line to stdout
 * @str: pointer
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (_putchar(str[i]) == EOF)
		{
			return EOF;
		}
		i++;
	}
	if (_putchar('\n') == EOF)
	{
		return EOF;
	}
	return (1)
}
