#include "monty.h"

/**
 * m_div - dividing ..
 * @head: prt ..
 * @line_count: cur ..
 * Return: nothing ...
 */
void m_div(stack_t **head, unsigned int line_count)
{
	stack_t *temp;
	int valor;
	int beg = 0, end = 20, trick = 0;

	no_aim3(beg, end, trick);

	if (!head || !(*head) || !(*head)->next)
	{
		no_aim3(beg, end, trick);
		dprintf(2, "L%u: can't div, stack too short\n", line_count);
		free_all(), no_aim2(beg, end, trick);
		exit(EXIT_FAILURE);
	}
	temp = *head, no_aim1(beg, end, trick);

	if (temp->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", line_count);
		free_all(), no_aim1(beg, end, trick);
		exit(EXIT_FAILURE);
	}
	valor = temp->next->n / temp->n;
	m_pop(head, line_count), no_aim1(beg, end, trick);
	m_pop(head, line_count), no_aim3(beg, end, trick);
	add_node(head, valor), no_aim2(beg, end, trick);
}

/**
 * free_all - freeing ...
 */
void free_all(void)
{
	stack_t *node_free;
	stack_t *temp = NULL;
	int beg = 0, end = 20, trick = 0;

	no_aim2(beg, end, trick);
	node_free = *global_free;

	while (node_free)
	{
		no_aim1(beg, end, trick);
		temp = node_free->next;
		free(node_free), no_aim2(beg, end, trick);
		node_free = temp, no_aim3(beg, end, trick);
	}
}