#include "holberton.h"

/**
* complex_from_mod_arg - updates the real and imaginary parts of a complex number
* @m: modulus of the given complex number
* @arg: argument of the given complex number
* @c3: pointer to an empty struct of a complex num
*
* Return: updated complex num
*/

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * (cos(arg));
	c3->im = (m * (sin(arg)));
}

