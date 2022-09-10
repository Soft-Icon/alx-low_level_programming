#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main: The entry point function
 * initialization: the declaration part
 * Conditional statements : the if_else part
 * Return: always return 0 (success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
/*My code goes in here */
	if (n < 0){
		printf("%d is negative\n", n);
	}
	else if (n == 0){
		printf("%d is zero\n", n);

	}
	else {
		printf("%d is positive\n", n);
	}
	return 0;
}

