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
	
	if (list == NULL)
		return;
	unsorted = (*list)->next;
	while (unsorted != NULL)
	{
		current = unsorted;
		unsorted = unsorted->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			current->prev->next = current->next;

			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}
			current->next = current->prev;
			current->prev = current->prev->prev;

			if (current->prev != NULL)
			{
				current->prev->next = current;
			}
			else
				*list = current;
			print_list(*list);
			current ->next->prev = current;
		}
	}
}
