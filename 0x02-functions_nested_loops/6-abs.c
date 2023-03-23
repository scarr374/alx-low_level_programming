#include "main.h"

/**
 * _ab - Computes the
 * @c: the num
 * Return: 1
 */

int _ab(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
