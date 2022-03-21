#include "holberton.h"

/**
* conjugate - conjuagtes a given complex number
* @c: the struct of the real and imaginary numbers
*
* Return: conjugate of complex number given
*/

complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}

