#ifndef HOL_H
#define HOL_H

/**
 * complex - structer of real and imaginary numbers
 *
 * @re: real number
 * @im: imganinary number
 */

struct complex
{
	double re;
	double im;
}

void display_complex_number(complex c);
#endif

