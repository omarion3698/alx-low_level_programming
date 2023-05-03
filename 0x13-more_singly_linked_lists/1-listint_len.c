#include "lists.h"

/**
  * listint_len - function that returns the number of elements
  * in a listint_t linked lists
  * @h: linked list to traverse
  * Return: returns the number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
