#include "holberton.h"

/**
* argument - gives the argument of a complex num
* @c: struct if the real and imainary numbers of the complex num
*
* Return: argument of the given complex num
*/

double argument(complex c)
{
	double arg = atan(c.im / c.re);

	return arg;
}

