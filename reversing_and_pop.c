#include "monty.h"
/**
 * m_pop - my func ..
 * @head: 1st para ..
 * @line_count: 2nd para ..
 * Return: nothing ..
 */
void m_pop(stack_t **head, unsigned int line_count)
{
	stack_t *temp;

	if (!(*head) || !head)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->next)
	{
		temp->next->prev = NULL;
		*head = temp->next;
	}
	else
		*head = NULL;
	free(temp);
}

/**
 * print_rev - my func ..
 * @h: 1st para ..
 * Return: nothing ..
 */
size_t print_rev(stack_t *h)
{
	size_t i = 0;

	while (h->next)
	{
		h = h->next;
	}
	while (h)
	{
		h = h->prev;
		i++;
	}
	return (i);
}
