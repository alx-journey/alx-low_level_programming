#include "main.h"

/**
* print_square - function to print diagonal characters
*@size: parameter n passed
* Return: void
*/

void print_square(int size)
{

	if (size <= 0)
		_putchar('\n');

	else
	{
		int i, j;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = 0 ; j < size ; j++)
				_putchar('#');
			_putchar('\n');
		}

	}
}
