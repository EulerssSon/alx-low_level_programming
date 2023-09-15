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
	long int i;
	long int Largest_Prime;

	num = 612852475143;
	Largest_Prime = -1;

	while (num % 2 == 0)
	{
		Largest_Prime = 2;
		num /= 2;
	}

	for (i = 3; i <= qrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			Largest_Prime = i;
			num /=  i;
		}
	}

	if (num > 2)
		Largest_Prime = num;

	printf("%ld\n", Largest_Prime);

	return (0);
}

