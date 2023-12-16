#include "main.h"

/**
* _isalpha - function that check for lowercase and uppercase
* @c: parameter to be checked
* Return: always 0 and 1
*/

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
