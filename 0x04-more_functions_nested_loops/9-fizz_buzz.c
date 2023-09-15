#include <stdio.h>

/**
 * main - main fucntion
 *
 * Return: 0 on sucess 1 on fail
 *
 * Description: Fizz_Buzz game if n %3 onlt fizz % 5 only buzz %15 Fizz_Buzz
 */

int main(void)
{
	int i = 1;

	for (; i <= 99; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("Buzz");
	return (0);
}

