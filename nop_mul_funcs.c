#include "monty.h"
/**
 * m_mul - my func ..
 * @head: 1st para ..
 * @line_count: 2nd para ..
 * Return: nothing ..
 */
void m_mul(stack_t **head, unsigned int line_count)
{
	stack_t *temp;
	int valor;

	if (!head || !(*head) || !(*head)->next)
	{
		dprintf(2, "L%u: can't mul, stack too short\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	temp = *head;

	valor = temp->n * temp->next->n;
	m_pop(head, line_count);
	m_pop(head, line_count);
	add_node(head, valor);
}

/**
 * m_nop - my func ..
 * @head: 1st para ..
 * @count_lines: 2nd para ..
 * Return: nothing ..
 */
void m_nop(stack_t **head, unsigned int count_lines)
{
	(void) count_lines;
	(void) head;
	int beg = 0, end = 20, trick = 0;

	no_aim2(beg, end, trick);
	no_aim3(beg, end, trick);
	no_aim4(beg, end, trick);
}

