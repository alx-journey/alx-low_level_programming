#include <unistd.h>

/**
* _putchar - putchar function for printing
*
* @c: parameter to print
*
*Return: return 1 on success, and -1 on error.
*/

int _putchar(char c)
{

	return(write(1, &c , 1));

}
