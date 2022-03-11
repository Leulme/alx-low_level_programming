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
int last_digit;
last_digit = n % 10;
if (last_digit < 6 && last_digit != 0)
{
    printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}
if (last_digit > 5) 
{
    printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
if (last_digit == 0)
{
    printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
return (0);
}
