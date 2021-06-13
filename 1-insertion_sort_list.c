#include "sort.h"

/**
* insertion_sort - sorts an array of integers in ascending order
* using the insertiont sort algorithm
* @list: the array to sort
* Return: Nothing
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *sub_current = NULL;

	current = *list;
	current = current->next;
	while (current)
	{
		if (current->n < current->prev->n)
		{
			sub_current = current;
			while (sub_current->n < sub_current->prev->n)
			{
				if (sub_current->prev->prev == NULL)
				{
					sub_current->next->prev = sub_current->prev;
					sub_current->prev->next = sub_current->next;
					sub_current->next = sub_current->prev;
					sub_current->prev = sub_current->next->prev;
					sub_current->next->prev = sub_current;
					*list = sub_current;
					print_list(*list);
					break;
				}
				else
				{
					sub_current->prev->next = sub_current->next;
					if (sub_current->next)
						sub_current->next->prev = sub_current->prev;
					sub_current->prev = sub_current->prev->prev;
					sub_current->next = sub_current->prev->next;
					sub_current->prev->next->prev = sub_current;
					sub_current->prev->next = sub_current;
					print_list(*list);
				}
			}
		}
		current = current->next;
	}
}