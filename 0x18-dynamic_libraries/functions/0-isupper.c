#include "main.h"

/**
*  _isupper - function checking for uppercase
*@c: parameter defined
* Return: 1 if c uppercase
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);


}
