#include "main.h"

/**
* _abs - function that print absolute value of a number
* @a: function parameter
* Return: always return 0
*/

int _abs(int a)
{

	if (a < 0)
	{
		return (-a);
	}
	else if (a > 0)
	{
		return (a);
	}
	return (0);
}
