#include "main.h"

/**
* _puts - resets n to 98
* @str: pointer to the value to be print
*
* Return: void
*/

void _puts(char *str)
{

	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);

	_putchar('\n');
}
