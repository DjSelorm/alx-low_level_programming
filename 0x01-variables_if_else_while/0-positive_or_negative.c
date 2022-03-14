#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - prints random values
 *
 *return: Always (0) on success
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

	return (0);
}
