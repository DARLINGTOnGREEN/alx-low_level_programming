#include "main.h"
/**
 * *_strncat - concantenate 2 strings of n byte.
 * @src: pointer source.
 * @dest: pointer destination.
 * @n: number of byte.
 * Return: number of byte.
 */
char *_strncat(char *dest, char *src, int n)
{

int dest_len, i;

for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
;

for (i = 0; i < n && src[i] != '\0'; i++)

dest[dest_len + i] = src[i];

dest[dest_len + i] = '\0';

return (dest);
}
