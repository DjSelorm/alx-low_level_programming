#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
*  more headers goes there 
*betty style doc for function main goes there
*
*main - Entry point
*
*return: Always (0) success
*/

int main(void)
{
	/*creates a random number;n*/
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{

		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	/* your code goes there */
	return (0);
}
