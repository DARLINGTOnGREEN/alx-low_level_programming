#include "main.h"
/**
 * *_strcat - concetenate 2 strings.
 * @src: source of pointer.
 * @dest: destination of pointer.
 * Return: void.
 */
char *_strcat(char *dest, char *src)
{
int a = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;

do {
	a++;
	dest[i] = src[a];
	i++;
} while (src[a] != '\0');

return (dest);
}
