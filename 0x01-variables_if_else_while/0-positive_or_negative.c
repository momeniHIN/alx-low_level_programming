#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * The main function entry point
 * It prints if the number is a positive or negative number
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}else if (n == 0)
	{
		printf("%d is zero\n", n);
	}else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
