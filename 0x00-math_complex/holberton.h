#ifndef HOL_H
#define HOL_H

/**
 * complex - structer of real and imaginary numbers
 *
 * @re: real number
 * @im: imganinary number
 */

typedef struct number
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
#endif

