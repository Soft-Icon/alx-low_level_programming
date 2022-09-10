#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*Description:main entry point
*
*return 0 (success)
*/

int main(void)
{

    int n;

    int last_digit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /*My code goes in here*/
    last_digit = n % 10;
    printf("Last digit of %d is %d ", n, last_digit);
    if (last_digit < 5)
        printf("and is greater than 5\n");
    else if (last_digit == 0)
    {
        printf("and is zero\n");
    }
    else if (last_digit > 6 && last_digit != 0)
    {
        printf("and is less than 6 and not 0\n");
    }
    return (0);
}
