#include <stdio.h>
#include <math.h>
/**
 * main - main function
 *
 * Return: 0 on ucess 1 on failure
 *
 * Decription: print the largest factore of a num
 */

int main(void)
{
	long int num;
	long int max;
	long int i;

	num = 612852475143;
	max = -1;

	while (num % 2 == 0)
	{
		max = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			num /= i;
		}
	}

	if (num > 2)
		max = num;

	printf("%ld\n", max);

	return (0);
}

