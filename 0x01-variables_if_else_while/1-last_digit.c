# include <stdio.h>
# include <stdlib.h>
# include <time.h>
/**
 * main - is the main function
 * Description: print last digit or the random number
 * Return: returns int value of 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
	/* your code goes there */
if ((n % 10) < 6 && (n % 10) != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n",
n, (n % 10));
}
if ((n % 10) > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, abs(n % 10));
}
if ((n % 10) == 0)
{
printf("Last digit of %d is %d and is 0\n", n, (n % 10));
}
return (0);
}
