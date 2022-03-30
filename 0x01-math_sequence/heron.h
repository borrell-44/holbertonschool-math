#ifndef HERON_H
#define HERON_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * struct h_list - singly linked list
 * @p:
 * @x0:
 *
 * Description: 
 *
 */

typedef struct h_list
{
	double p;
	double x0;
	long double elt;
	struct h_list *next;
} t_cell;

t_cell *heron(double p, double x0);
#endif

