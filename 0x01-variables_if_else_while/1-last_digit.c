#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - main function
*
* Return: return zero
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) > 5)
		printf("%d is greater than \n", n);
	else if ((n % 10) == 0)
		printf("%d is 0 \n", n);
	else
		printf("%d is less than 6 \n", n);
	return (0);
}
