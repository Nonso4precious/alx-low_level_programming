#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - The last digit of a random number
*Description: 'Prints the last digit of a random number'
*Return: Always (0) Success
*/

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;

	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}

	if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not less than 0\n",
		n, n % 10);

	}

	if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);

	}

	if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not less than 0\n",
		n, n % 10);
	}

	return (0);

}
