#include <stdio.h>

/**
 * main - main function

 * Return: 0 on sucess 1 on failure

 * Description: print the largest factore of a num
 */

int main(void)
{
	unsigned long int n = 0;
	unsigned long int i;
	unsigned long int j;
	unsigned long int Larg_Prime_Factor = 0;
	int TheBoolean;

	for (i = 2; i <= n; i++)
	{
		if ((n % i) == 0)
		{
			TheBoolean = 1;

			for (j =2; j < i / 2 ; j++)
			{
				if (i % j == 0)
				{
					TheBoolean = 0;
					break;
				}
			}
			if (TheBoolean == 1)
			{
				Larg_Prime_Factor = i;
			}

		}

	}
	printf("%lu\n", Larg_Prime_Factor);
	return (0);
}
