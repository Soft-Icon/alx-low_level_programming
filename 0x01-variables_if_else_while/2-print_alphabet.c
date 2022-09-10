#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * Description:main - The entry point function
 *initialization:the declaration part
 * Conditional statements : the if_else part
 * Return: always return 0 (success)
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');

	return (0);
}
