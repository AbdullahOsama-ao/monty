#include "monty.h"

/**
 * m_pall - my func ..
 * @head: 1st para ..
 * @line_count: 2nd para ..
 * Return: nothing ...
 */
void m_pall(stack_t **head, __attribute__((unused)) unsigned int line_count)
{
	stack_t *temp = *head;

	if (*head && head)
	{
		while (temp)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
		}
	}
}

/**
 * m_pchar - my func ..
 * @node: 1st para ..
 * @line_count: 2nd apra ..
 * Return: nothing ..
 */
void m_pchar(stack_t **node, unsigned int line_count)
{
	int num = 0;

	if (!*node || !node)
	{
		dprintf(2, "L%u: can't pchar, stack empty\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	num = (*node)->n;
	if ((num < 33) || (num > 127))
	{
		dprintf(2, "L%u: can't pchar, value out of range\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	putchar(num);
	putchar('\n');
}

/**
 * m_pint - my func ..
 * @node: 1st para ..
 * @line_count: 2nd para ..
 * Return: nothing ..
 */
void m_pint(stack_t **node, unsigned int line_count)
{
	if (!*node || !node)
	{
		dprintf(2, "L%u: can't pint, stack empty\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*node)->n);
}
