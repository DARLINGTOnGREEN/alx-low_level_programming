#include "main.h"
/**
 * _isalpha - check lower case letters.
 * @c: character to check the code.
 * Return: 0 or 1.
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
