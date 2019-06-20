#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list used insert sort
 * @list: Double pointer with nodes
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *n_a, *n_b;

	if (list == NULL || *list == NULL)
		return;

	n_a = *list;
	while (n_a->next != NULL)
	{
		n_b = n_a->next;
		while (n_a->prev != NULL && n_a->prev->n > n_a->n)
		{
			n_a->prev->next = n_a->next;
			if (n_a->next != NULL)
				n_a->next->prev = n_a->prev;
			n_a->next = n_a->prev;
			n_a->prev = n_a->next->prev;
			n_a->next->prev = n_a;
			if (n_a->prev == NULL)
				*list = n_a;
			else
				n_a->prev->next = n_a;
			print_list(*list);
		}
		n_a = n_b;
	}
}
