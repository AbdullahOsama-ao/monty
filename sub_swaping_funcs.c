#include "monty.h"
/**
 * m_sub - my func ..
 * @head: 1st para ..
 * @line_count: 2nd para ..
 * Return: nothing ..
 */
void m_sub(stack_t **head, unsigned int line_count)
{
	stack_t *temp;
	int valor;

	if (!head || !(*head) || !(*head)->next)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	temp = *head;

	valor = temp->next->n - temp->n;
	m_pop(head, line_count);
	m_pop(head, line_count);
	add_node(head, valor);
}

/**
 * m_swap - my func ..
 * @head: 1st para ..
 * @count_lines: 2nd para ..
 * Return: nothing ..
 */
void m_swap(stack_t **head, unsigned int count_lines)
{
	stack_t *temp;

	if (!head || !(*head) || !(*head)->next)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", count_lines);
		exit(EXIT_FAILURE);
	}

	temp = (*head)->next;
	(*head)->prev = temp;
	(*head)->next = temp->next;
	temp->prev = NULL;

	if (temp->next)
		temp->next->prev = *head;
	temp->next = *head;
	*head = temp;
}
