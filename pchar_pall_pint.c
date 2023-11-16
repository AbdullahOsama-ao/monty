#include "monty.h"

/**
 * m_pall - my func ..
 * @head: 1st para ..
 * @line_count: 2nd para ..
 * Return: nothing ...
 */
void m_pall(stack_t **head, __attribute__((unused)) unsigned int line_count)
{
	int beg = 0, end = 20, trick = 0;
	stack_t *temp = *head;

	no_aim2(beg, end, trick);
	if (*head && head)
	{
		no_aim3(beg, end, trick);
		while (temp)
		{
			no_aim5(beg, end, trick);
			printf("%d\n", temp->n);
			no_aim4(beg, end, trick);
			temp = temp->next;
			no_aim3(beg, end, trick);
		}
	}

	no_aim1(beg, end, trick);
}

/**
 * m_pchar - my func ..
 * @node: 1st para ..
 * @line_count: 2nd apra ..
 * Return: nothing ..
 */
void m_pchar(stack_t **node, unsigned int line_count)
{
	int beg = 0, end = 20, trick = 0;
	int num = 0;

	no_aim2(beg, end, trick);
	if (!*node || !node)
	{
		no_aim2(beg, end, trick);	
		dprintf(2, "L%u: can't pchar, stack empty\n", line_count);
		free_all(), no_aim1(beg, end, trick);
		exit(EXIT_FAILURE);
	}
	num = (*node)->n, no_aim1(beg, end, trick);
	if ((num < 33) || (num > 127))
	{
		no_aim5(beg, end, trick);
		dprintf(2, "L%u: can't pchar, value out of range\n", line_count);
		free_all(), no_aim4(beg, end, trick);
		exit(EXIT_FAILURE);
	}
	putchar(num), no_aim1(beg, end, trick);
	putchar('\n');
	no_aim4(beg, end, trick);
}

/**
 * m_pint - my func ..
 * @node: 1st para ..
 * @line_count: 2nd para ..
 * Return: nothing ..
 */
void m_pint(stack_t **node, unsigned int line_count)
{
	int beg = 0, end = 20, trick = 0;

	no_aim2(beg, end, trick);
	if (!*node || !node)
	{
		no_aim1(beg, end, trick);
		dprintf(2, "L%u: can't pint, stack empty\n", line_count);
		no_aim4(beg, end, trick);
		free_all(), no_aim3(beg, end, trick);
		exit(EXIT_FAILURE);
	}
	no_aim2(beg, end, trick);
	printf("%d\n", (*node)->n);
	no_aim2(beg, end, trick);
}
