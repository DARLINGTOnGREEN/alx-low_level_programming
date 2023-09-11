#include <stdio.h>
/**
 * main - printout both lower and upercase alpahbeth
 *
 * return: 0.
 */
int main(void)
{
	char x , b;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	
	putchar('\n');
	

	return (0);
}
