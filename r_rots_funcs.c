#include "monty.h"
/**
 * m_rotl - my func ..
 * @head: 1st para ..
 * @line_count: 2nd para ..
 *
 * Return: nothing ..
 */
void m_rotl(stack_t **head, unsigned int line_count)
{
	stack_t *temp, *top;
	(void) line_count;

	if (!head || !(*head) || !(*head)->next)
		return;
	temp = *head;
	top = temp->next;
	top->prev = NULL;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = *head;

	(*head)->next = NULL;
	(*head)->prev = temp;

	*head = top;
}

/**
 * m_rotr - my func ..
 * @head: 1st para ..
 * @line_count: 2nd para ..
 *
 * Return: nothing ..
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
