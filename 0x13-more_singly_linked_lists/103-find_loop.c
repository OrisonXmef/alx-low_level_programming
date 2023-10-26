#include "lists.h"

/**
 * find_listint_loop - Find the loop in a linked list (if it exists).
 * @head: A pointer to the head of the list.
 *
 * Return: The address of the node wher the loop stat, or NULL if der is no lop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL)
		return (NULL);
	tortoise = head;
	hare = head;
	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}
	return (NULL);
}
