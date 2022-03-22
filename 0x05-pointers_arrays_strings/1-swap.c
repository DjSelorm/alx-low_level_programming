#include "main.h"
#include <stdio.h>

/**
 * void swap_int(int *a, int *b) - Write a function that swaps
 * the values of two integers
 *
 * @a,@b: numbers.
 */

void swap_int(int *a, int *b)
{

	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
