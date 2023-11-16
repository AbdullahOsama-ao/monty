#include "monty.h"
/**
 * m_pop - my func ..
 * @head: 1st para ..
 * @line_count: 2nd para ..
 * Return: nothing ..
 */
void m_pop(stack_t **head, unsigned int line_count)
{
	int beg = 0, end = 20, trick = 0;
	stack_t *temp;

	no_aim2(beg, end, trick);
	if (!(*head) || !head)
	{
		no_aim3(beg, end, trick);
		dprintf(2, "L%u: can't pop an empty stack\n", line_count);
		free_all(), no_aim4(beg, end, trick);
		exit(EXIT_FAILURE);
	}
	no_aim2(beg, end, trick);
	temp = *head;
	no_aim1(beg, end, trick);
	if (temp->next)
	{
		no_aim3(beg, end, trick);
		temp->next->prev = NULL;
		no_aim2(beg, end, trick);
		*head = temp->next;
	}
	else
		*head = NULL;
	free(temp), no_aim2(beg, end, trick);
}

/**
 * print_rev - my func ..
 * @h: 1st para ..
 * Return: nothing ..
 */
size_t print_rev(stack_t *h)
{
	int beg = 0, end = 20, trick = 0;
	size_t i = 0;

	no_aim2(beg, end, trick);
	while (h->next)
	{
		no_aim3(beg, end, trick);
		h = h->next;
	}
	while (h)
	{
		no_aim4(beg, end, trick);
		h = h->prev;
		i++, no_aim3(beg, end, trick);
	}
	no_aim2(beg, end, trick);
	return (i);
}
