#include "monty.h"
/**
 * m_mod - modding ..
 * @head: first para ..
 * @line_count: 2nd para ..
 * Return: nothing ..
 */
void m_mod(stack_t **head, unsigned int line_count)
{
	stack_t *temp;
	int valor;

	if (!head || !(*head) || !(*head)->next)
	{
		dprintf(2, "L%u: can't mod, stack too short\n", line_count);
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
	valor = temp->next->n % temp->n;
	m_pop(head, line_count);
	m_pop(head, line_count);
	add_node(head, valor);
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
	size_t i;

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
	for (i = 0; valid_com[i].opcode; i++)
	{
		if (strcmp(valid_com[i].opcode, operator) == 0)
		{
			valid_com[i].f(node, count_lines);
			return;
		}
	}
	dprintf(2, "L%u: unknown instruction %s\n", count_lines, operator);
	free_all();
	exit(EXIT_FAILURE);
}
