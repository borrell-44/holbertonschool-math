#ifndef HERON_H
#define HERON_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * struct h_list - singly linked list
 * @p: non-perfect square
 * @x0: iteratiosn
 * @elt: closet perfect square to p
 * @next: points to the next node
 *
 * Description: linked list for herons sequance
 *
 */

typedef struct h_list
{
	double p;
	double x0;

	double elt;
	struct h_list *next;
} t_cell;

t_cell *heron(double p, double x0);
#endif

