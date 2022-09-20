#include "main.h"
/**
 * int _strlen: this function returns the lenght of a string
 * @s: the Pointer
 * Return: always 0
 */
int _strlen(char *s)
{
	char *p = s;

	while (*p)
	{	p++;
	}
	return p-s;
}
