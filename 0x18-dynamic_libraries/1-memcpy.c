#include "main.h"

/**
* _memcpy - copy from memory with a constant byte
* @dest: pointer
* @src: constant byte
* @n: number of bytes
* Return: return dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);

}
