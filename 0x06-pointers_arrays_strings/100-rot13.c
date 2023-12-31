#include "main.h"

/**
 * *rot13 - encodes string using rot13.
 * @s: int type array pointer.
 * Return: void.
 */

char *rot13(char *s)
{
	int i, ii;
	char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTDNEpUTHQoQUJMHLrErGJyHg89uy71MyuHbcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 54; ii++)
		{
			if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
			&& s[i] == input[ii])
			{
				s[i] = output[ii];
				break;
			}
		}
	}
	return (s);
}
