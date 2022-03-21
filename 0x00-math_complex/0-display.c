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
	double neg;

	printf("%.f", c.re);
	if (c.im > 0)
	{
		printf(" + ");
		if (c.im == 1)
		{
			printf("i");
		}
		else
		{
			printf("%.fi", c.im);
		}
	}
	else if (c.im < 0)
	{
		printf(" - ");
		neg = c.im * -1;
		if (neg == 1)
		{
			printf("i");
		}
		else
		{
			printf("%.fi", neg);
		}
	}
	printf("\n");
}

