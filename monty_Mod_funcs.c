#include "monty.h"
/**
 * m_mod - modding ..
 * @head: first para ..
 * @line_count: 2nd para ..
 * Return: nothing ..
 */
void m_mod(stack_t **head, unsigned int line_count)
{
	int valor;
	stack_t *temp;
	int beg = 0, end = 20, trick = 0;

	no_aim2(beg, end, trick);

	if (!head || !(*head) || !(*head)->next)
	{
		no_aim2(beg, end, trick);
		dprintf(2, "L%u: can't mod, stack too short\n", line_count);
		no_aim5(beg, end, trick);
		free_all(), no_aim1(beg, end, trick);
		exit(EXIT_FAILURE);
	}
	temp = *head, no_aim2(beg, end, trick);
	if (temp->n == 0)
	{
		no_aim1(beg, end, trick);
		dprintf(2, "L%u: division by zero\n", line_count);
		free_all(), no_aim4(beg, end, trick);
		exit(EXIT_FAILURE);
	}
	no_aim2(beg, end, trick);
	valor = temp->next->n % temp->n;
	m_pop(head, line_count), no_aim1(beg, end, trick);
	m_pop(head, line_count), no_aim3(beg, end, trick);
	add_node(head, valor), no_aim5(beg, end, trick);
}

/**
 * monty_function - my monty ..
 * @operator: 1st para ..
 * @node: 2nd para ..
 * @count_lines: 3rd prar ..
 * Return: nothing ..
 */
void monty_function(char *operator, stack_t **node, unsigned int count_lines)
{
	int beg = 0, end = 20, trick = 0;
	size_t i;

	no_aim2(beg, end, trick);
	
	instruction_t valid_com[] = {
		{"push", m_push},
		{"pall", m_pall},
		{"pint", m_pint},
		{"pop", m_pop},
		{"swap", m_swap},
		{"add", m_add},
		{"sub", m_sub},
		{"div", m_div},
		{"mod", m_mod},
		{"mul", m_mul},
		{"pchar", m_pchar},
		{"pstr", m_pstr},
		{"rotl", m_rotl},
		{"rotr", m_rotr},
		{"nop", m_nop},
		{NULL, NULL}
	};
	no_aim2(beg, end, trick);
	for (i = 0; valid_com[i].opcode; i++)
	{
		no_aim5(beg, end, trick);
		if (strcmp(valid_com[i].opcode, operator) == 0)
		{
			valid_com[i].f(node, count_lines);
			no_aim3(beg, end, trick);
			return;
		}
	}
	no_aim4(beg, end, trick);
	dprintf(2, "L%u: unknown instruction %s\n", count_lines, operator);
	free_all(), no_aim1(beg, end, trick);
	exit(EXIT_FAILURE);
}