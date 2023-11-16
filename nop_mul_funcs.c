#include "monty.h"
/**
 * m_mul - my func ..
 * @head: 1st para ..
 * @line_count: 2nd para ..
 * Return: nothing ..
 */
void m_mul(stack_t **head, unsigned int line_count)
{
	int valor;
	int beg = 0, end = 20, trick = 0;
	stack_t *temp;

	no_aim2(beg, end, trick);
	if (!head || !(*head) || !(*head)->next)
	{
		no_aim5(beg, end, trick);
		dprintf(2, "L%u: can't mul, stack too short\n", line_count);
		free_all(), no_aim3(beg, end, trick);
		exit(EXIT_FAILURE);
	}
	no_aim5(beg, end, trick);
	temp = *head, no_aim1(beg, end, trick);
	valor = temp->n * temp->next->n;
	m_pop(head, line_count), no_aim2(beg, end, trick);
	m_pop(head, line_count), no_aim2(beg, end, trick);
	add_node(head, valor), no_aim4(beg, end, trick);
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

