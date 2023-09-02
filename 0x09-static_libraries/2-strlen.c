#include "main.h"

/**
* _strlen - resets n to 98
* @s: pointer to the value to be swaped
*
* Return: length of the string
*/

int _strlen(char *s)
{

	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
