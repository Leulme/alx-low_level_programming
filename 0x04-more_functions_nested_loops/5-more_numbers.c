# include "main.h"
/**
 * more_numbers - is a funciton
 * Description: prints numbers
 * Return: void
 */
void more_numbers(void)
{
	int x;
	int i;
	int y;
	int z;

	for (z = 0; z < 10; z++)
	{
		x = 58;
		y = 0;
		while (y < 2)
		{
			for (i = 48; i < x; i++)
			{
				if (y == 1)
				{
					_putchar(49);
				}
				_putchar(i);
			}
			x = 53;
			y++;
		}
		_putchar(10);
	}
}
