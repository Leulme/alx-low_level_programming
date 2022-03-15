# include "main.h"
/**
 * _isalpha - is the function
 * @c: is an int variable
 * Description: checks if c is alphabet
 * Return: int
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90)  || (c >= 97 && c <= 123))
{
return (1);
}
else
{
return (0);
}
}
