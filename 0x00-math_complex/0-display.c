#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - build complex number
 * @c: struct of the numbers
 *
 * Return: print complex
 */

void display_complex_number(complex c)
{
	printf("%.f", c.re);
	if (c.im > 0)
		printf(" + %.fi\n", c.im);
	else
		printf("\n");
}

