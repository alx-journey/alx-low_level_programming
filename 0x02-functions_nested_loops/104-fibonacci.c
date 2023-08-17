#include <stdio.h>

/**
* main - main function
*
* Return: zero
*/
int main(void)
{
	int term1 = 1;
	int term2 = 2;
	int next;
	int i;

	printf("%d, ", term1);
	for (i = 1 ; i < 98 ; i++)
	{
		printf("%d", term2);
		next = term1 + term2;
		term1 = term2;
		term2 = next;
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
