#include <stdio.h>
#include <stdlib.h>

/**
 * Description:main - The main entry point
 *
 *
 * Return: Always return 0 if success
 */

int main(void)
{
	char letters;
	int num;
	long int number;
	long long int digit;
	float decimal;

	printf("Size of a char: %zu byte(s)\n", sizeof(letters));
	printf("Size of an int: %zu byte(s)\n", sizeof(num));
	printf("Size of a long int: %zu byte(s)\n", sizeof(number));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(digit));
	printf("Size of a float: %zu byte(s)\n", sizeof(decimal));
	return (0);
}

