#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
*Description:main entry point
*
*Return: return 0 (success)
*/

int main(void)
{
	int x;

	for(x = 'A'; x <= 'Z'; x++)
		putchar(tolower(x));
	return (0);
}

