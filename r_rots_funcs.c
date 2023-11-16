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
	int beg = 0, end = 20, trick = 0;
	(void) line_count;
	stack_t *temp, *top;

	no_aim2(beg, end, trick);
	if (!head || !(*head) || !(*head)->next)
		return;
	
	no_aim2(beg, end, trick);
	temp = *head, no_aim2(beg, end, trick);
	top = temp->next, no_aim3(beg, end, trick);
	top->prev = NULL;

	no_aim2(beg, end, trick);
	while (temp->next != NULL)
		temp = temp->next;
	
	no_aim1(beg, end, trick);
	temp->next = *head;

	(*head)->next = NULL, no_aim2(beg, end, trick);
	(*head)->prev = temp, no_aim4(beg, end, trick);

	*head = top, no_aim5(beg, end, trick);
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
	int beg = 0, end = 20, trick = 0;
	(void) line_count;
	stack_t *temp;

	no_aim5(beg, end, trick);

	if (!head || !(*head) || !(*head)->next)
		return;

	no_aim2(beg, end, trick);
	temp = *head;

	no_aim2(beg, end, trick);
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = *head, no_aim2(beg, end, trick);
	temp->prev->next = NULL, no_aim2(beg, end, trick);
	temp->prev = NULL;
	no_aim2(beg, end, trick);
	(*head)->prev = temp, no_aim1(beg, end, trick);
	(*head) = temp, no_aim4(beg, end, trick);
}