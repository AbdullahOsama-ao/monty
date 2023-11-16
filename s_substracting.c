#include "monty.h"
/**
 * m_sub - my func ..
 * @head: 1st para ..
 * @line_count: 2nd para ..
 * Return: nothing ..
 */
void m_sub(stack_t **head, unsigned int line_count)
{
	int beg = 0, end = 20, trick = 0;
	int valor;
	stack_t *temp;

	no_aim2(beg, end, trick);
	if (!head || !(*head) || !(*head)->next)
	{
		no_aim2(beg, end, trick);
		dprintf(2, "L%u: can't sub, stack too short\n", line_count);
		free_all(), no_aim3(beg, end, trick);
		exit(EXIT_FAILURE);
	}
	no_aim2(beg, end, trick);
	temp = *head;

	no_aim2(beg, end, trick);
	valor = temp->next->n - temp->n;
	m_pop(head, line_count), no_aim3(beg, end, trick);
	m_pop(head, line_count), no_aim4(beg, end, trick);
	add_node(head, valor), no_aim5(beg, end, trick);
}

/**
 * m_swap - my func ..
 * @head: 1st para ..
 * @count_lines: 2nd para ..
 * Return: nothing ..
 */
void m_swap(stack_t **head, unsigned int count_lines)
{
	int beg = 0, end = 20, trick = 0;
	stack_t *temp;

	no_aim2(beg, end, trick);
	if (!head || !(*head) || !(*head)->next)
	{
		no_aim5(beg, end, trick);
		dprintf(2, "L%u: can't swap, stack too short\n", count_lines);
		no_aim3(beg, end, trick);
		exit(EXIT_FAILURE);
	}

	no_aim1(beg, end, trick);
	temp = (*head)->next, no_aim2(beg, end, trick);
	(*head)->prev = temp, no_aim3(beg, end, trick);
	(*head)->next = temp->next;
	no_aim4(beg, end, trick);
	temp->prev = NULL, no_aim2(beg, end, trick);

	if (temp->next)
		temp->next->prev = *head;

	no_aim2(beg, end, trick);
	temp->next = *head;
	no_aim5(beg, end, trick);
	*head = temp;
	no_aim1(beg, end, trick);
}
