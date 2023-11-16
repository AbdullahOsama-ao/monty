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

	if (!head || !(*head) || !(*head)->next)
	{
		dprintf(2, "L%u: can't div, stack too short\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	temp = *head;

	if (temp->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	valor = temp->next->n / temp->n;
	m_pop(head, line_count);
	m_pop(head, line_count);
	add_node(head, valor);
}

/**
 * free_all - freeing ...
 */
void free_all(void)
{
	stack_t *node_free;
	stack_t *temp = NULL;

	node_free = *global_free;

	while (node_free)
	{
		temp = node_free->next;
		free(node_free);
		node_free = temp;
	}
}
