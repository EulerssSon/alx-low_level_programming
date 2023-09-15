#include <tdio.h>
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
	long int Larget_Prime;

	num = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		Larget_Prime = 2;
		num /= 2;
	}

	for (i = 3; i <= qrt(n); i = i + 2)
	{
		while (num % i == 0)
		{
			Larget_Prime = i;
			num /=  i;
		}
	}

	if (num > 2)
		Larget_Prime = num;

	printf("%ld\n", Larget_Prime);

	return (0);
}

