#include "monty.h"
/**
 * m_rotr - rotates the stack to the bottom
 * @head: double pointer to the begining of the list
 * @line_count: script line number
 */

void m_rotr(stack_t **head, unsigned int line_count)
{
	stack_t *temp;
	(void) line_count;

	if (!head || !(*head) || !(*head)->next)
		return;

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = *head;
	temp->prev->next = NULL;
	temp->prev = NULL;

	(*head)->prev = temp;
	(*head) = temp;
}
