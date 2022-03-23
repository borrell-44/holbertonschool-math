#include "holberton.h"

/**
* division - peforms the division operation to complex numbers
* @c1: struct of a complex num
* @c2: second struct of a complex num
* @c3: a pointer to a struct of a complex num
* 
* Return: peforms division of the complex numbers
*/

void division(complex c1, complex c2, complex *c3)
{
	c3->re = ((c1.re * c2.re) + (c1.im * c2.im)) / ((c2.re * c2.re) + (c2.im * c2.im));
	c3->im = ((c1.im * c2.re) - (c1.re * c2.im)) / ((c2.re * c2.re) + (c2.im * c2.im));
}

