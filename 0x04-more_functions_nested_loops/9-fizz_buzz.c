# include <stdio.h>
/**
 * main - is a function
 * Description: prints values from 0 to 100
 * with fizz for multiple 3 and buzz for multiple
 * of 5 and fizzbuzz for multiple of both 3 and 5
 * Return: integer value of 0
 */
int main(void)
{
	int x;

	x = 1;
	while (x < 101)
	{
		if (x == 100)
		{
			printf("Buzz\n");
		}
		else
		{
			if ((x % 3 == 0) && (x % 5 == 0))
			{
				printf("FizzBuzz ");
			}
			else if (x % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (x % 5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", x);
			}
		}
		x++;
	}

}
