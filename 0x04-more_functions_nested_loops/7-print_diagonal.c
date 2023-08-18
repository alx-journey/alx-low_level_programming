#include "main.h"

/**
* print_line - function to print characters
*@n: parameter defined
* Return: void
*/

void print_diagonal(int n)
{

	if (n <= 0)
		_putchar('\n');

	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar(' ');
			_putchar('\\');
	
		_putchar('\n');
	}
}
