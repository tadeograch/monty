#ifndef MONTY_H
#define MONTY_H

extern char *code[2];
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
int get_bytecode(char *filename);
void split_buffer(char *buffer);
int file_char_count(char *filename);
int analize(stack_t **stack, unsigned int line_number);
int get_num(unsigned int line_number);
void push_func(stack_t **stack, unsigned int line_number);
void pall_func(stack_t **stack, unsigned int line_number);
unsigned int print_dlistint(const stack_t *h);/*Aux function*/
unsigned int _strlen(char *s); /*Aux function*/
int compare(char *str1, char *str2);
void pint_func(stack_t **stack, unsigned int line_number);
void pop_func(stack_t **stack, unsigned int line_number);
unsigned int dlistint_len(const stack_t *h);
void swap_func(stack_t **stack, unsigned int line_number);
void add_func(stack_t **stack, unsigned int line_number);
void nop_func(stack_t **stack, unsigned int line_number);
void free_dlistint(stack_t *head);
int check_number(char *token);
void mod_func(stack_t **stack, unsigned int line_number);
void mul_func(stack_t **stack, unsigned int line_number);
void div_func(stack_t **stack, unsigned int line_number);
void sub_func(stack_t **stack, unsigned int line_number);
#endif
