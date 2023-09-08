#include "main.h"

/**
* malloc_checked - allocate memory using malloc
*
* @b: size of the memory
* Return: pointer to a new memory.
*/

void *malloc_checked(unsigned int b)
{

	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
