#include "main.h"

/**
* _strdup - copy string to a newly allocated space in memory
* @str: string to copy to new memory
* Return: pointer to a new memory
*/

char *_strdup(char *str)
{

	char *copy;
	int count = 0;
	unsigned int i;

	if (str == 0)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);

	for (i = 0 ; str[i] !=  '\0' ; i++)
		copy[i] = str[i];

	return (copy);

}
