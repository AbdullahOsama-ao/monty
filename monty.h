#ifndef MONTY_H
#define MONTY_H

/* my LIBs */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* my macros */
#define SEPARATORS " \n\t\r"

/* my globals */
extern stack_t **global_free;

/**
 * struct stack_s - my structure ..
 * @n: 1st member ..
 * @prev: 2nd member ..
 * @next: 3rd member ..
 *
 * Description: my description ..
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - my structure ..
 * @opcode: 1st member ..
 * @f: 2nd member ..
 *
 * Description: my description ..
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* my Stacks & Queues declarations */
void no_aim4(int beg, int end, int trick);
void m_add(stack_t **head, unsigned int line_count);
void m_sub(stack_t **head, unsigned int line_count);
void m_mul(stack_t **head, unsigned int line_count);
size_t print_rev(stack_t *h);
void m_mod(stack_t **head, unsigned int line_count);
void m_pchar(stack_t **head, unsigned int line_count);
size_t print(stack_t *h);
void free_all(void);
void m_swap(stack_t **head, unsigned int count_lines);
void no_aim3(int beg, int end, int trick);
void no_aim5(int beg, int end, int trick);
void m_nop(stack_t **head, unsigned int count_lines);
void m_div(stack_t **head, unsigned int line_count);
void monty_function(char *operator, stack_t **node, unsigned int count_lines);
stack_t *add_node(stack_t **head, const int n);
void m_push(stack_t **node, unsigned int line_count);
void m_pall(stack_t **node, unsigned int line_count);
void m_pint(stack_t **node, unsigned int line_count);
void m_pop(stack_t **head, unsigned int line_count);
int delete_node(stack_t **head, unsigned int index);
void m_pstr(stack_t **head, unsigned int line_count);
void m_rotl(stack_t **head, unsigned int line_count);
void m_rotr(stack_t **head, unsigned int line_count);
void no_aim1(int beg, int end, int trick);
void no_aim2(int beg, int end, int trick);

#endif /* MY_MONTY_H */
