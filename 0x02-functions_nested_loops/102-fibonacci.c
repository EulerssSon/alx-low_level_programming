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
	long int i = 3;
	long int fi;

	printf("%ld, %ld, ", f1, f2);
	for (; i <= 50; i++)
	{
		fi = f1 + f2;
		if (i != 50)
		{
			printf("%ld, ", fi);
			f1 = f2;
			f2 = fi;
		}
		else
		{
			printf("%ld\n", fi);
		}
	}
	return (0);
}

