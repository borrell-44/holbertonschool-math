#include "heron.h"

/**
 * find_conv - finds the convergence with an error less or equal to 10^(-7)
 * @head: head of the linked list
 *
 * Return: new node with the convergence
 */

t_cell *find_conv(t_cell **head)
{
	int count = 1;
	t_cell *tmp = *head;
	t_cell *new;

	do {
		new = malloc(sizeof(t_cell));
		if (new == NULL)
		{
			exit(0);
		}
		new->p = tmp->p;
		new->x0 = tmp->x0;
		new->elt = (tmp->elt + tmp->p / tmp->elt) / 2;
		new->next = *head;
		*head = new;
		tmp = *head;
		count++;
	} while (count < 7);
	return (*head);
}

/**
* *heron - gives a Heron sequence with an arror less or equal to 10^(-7)
* @p:
* @x0:
*
* Return: Heron sequence that converges with an error less or equal to 10^(-7)
*/

t_cell *heron(double p, double x0)
{
	t_cell *head;

	head = malloc(sizeof(t_cell));
	if (head == NULL)
	{
		exit(0);
	}
	head->p = p;
	head->x0 = x0;
	head->elt = 1;
	head->next = NULL;

	head = find_conv(&head);
	return (head);
}

