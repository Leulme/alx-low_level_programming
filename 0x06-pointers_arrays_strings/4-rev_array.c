# include <string.h>
# include "main.h"
/**
 * reverse_array - is a function
 * @a: is a pointer variable
 * @n: is an integer variable
 * Description: reverse array elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j;
	int i;
	int temp;

	j = n - 1;
	for (i = 0; i < n; i++)
	{
		if (i >= j)
		{
			break;
		}
		else
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			j--;
		}
	}
}
