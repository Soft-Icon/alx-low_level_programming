#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _isupper -> checks for upper case character.
 * @c: character argument 
 * return: returns 1 if upper character but returns 0 if not.
 */
int _isupper(int c)
{
	return(c >= 'A' && c <= 'Z');
}
