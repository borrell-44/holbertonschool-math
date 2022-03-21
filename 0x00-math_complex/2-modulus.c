#include "holberton.h"
#include <math.h>

/**
* modulus - it modulates a given complex number
* @c: structer of imaginary and real number
*
* Return: complex number modulated
*/

double modulus(complex c)
{
	double num;

	num = sqrt((c.re * c.re) + (c.im * c.im));

	return (num);
}

