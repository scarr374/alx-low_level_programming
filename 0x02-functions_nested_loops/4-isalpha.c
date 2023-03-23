#include "main.h"

/**
 * _isalpha - checks for alphabetic
 * @c: The character
 * Return: 1 for alphabetic
 */
int _isalpha(int c)
{
	if ((c = 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
