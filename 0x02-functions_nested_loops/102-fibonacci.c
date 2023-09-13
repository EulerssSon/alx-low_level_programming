#include <stdio.h>

/**
 * main - main function
 * Return: 0 on sucess
 * Description: print the first 50 fobi's numbers starting fomr 1 2
 */

int main(void)
{
	long int f1 = 1;
	long int f2 = 2;
	long long sum = 2;
	long int fi;

	while (sum <= 4000000)
	{
		fi = f1 + f2;
		if (fi % 2 == 0)
			sum += fi;
		f1 = f2;
		f2 = fi;
	}
	printf("%lld\n", sum);
	return (0);
}

