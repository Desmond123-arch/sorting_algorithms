#include "sort.h"
/**
 * insertion_sort_list - sorts a list using insertion sort
 * @list: pointer to list to sort(doubly linked list)
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *unsorted;
	listint_t *current;
	listint_t *temp;

	if  (list == NULL || *list == NULL)
		return;
	unsorted = (*list)->next;
	while (unsorted)
	{
		current = unsorted;
		unsorted = unsorted->next;
		while(current->prev && current->n < current->prev->n)
		{
			temp = current->prev;
			current->prev->next = current->next;

			if (current->next)
				current->next->prev = temp;

			current->next = temp;
			current->prev = temp->prev;

			if (temp->prev)
				temp->prev->next = current;
			else
				*list = current;
			temp->prev = current;
			print_list(*list);
		}
	}
}
