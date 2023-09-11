#include <stdio.h>
/**
 * main - printout both lower and upercase alpahbeth
 *
 * return: 0.
 */

int main ()
{
    char letter , b;

    for (letter = 'a'; letter <= 'z'; letter++)
        putchar(letter);
    for (b = 'A'; b <= 'Z'; b++)
        putchar(b);
    

    putchar('\n');

    return (0);
}

