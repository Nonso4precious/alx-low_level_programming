#include <stdlib.h>
#include <time.h>

/**
*main - Printing alphabet in lowercase
*Description: 'Writing a program that prints alphabet in lowercase'
*Return: Always (0)
*/

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');

	return (0);
}
