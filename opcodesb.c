#include "monty.h"

/**
 * opcode_nop -
 * @stack: pointer to pointer to first node
 * @n: int value to be in added to the node
 * Return: 1 is added 0 otherwise
 **/
void opcode_nop(__attribute__((unused)) stack_t **stack,
                __attribute__((unused)) unsigned int line_number)
{
}


/**
 * push - pushes node to stack
 * @head: pointer to pointer to first node
 * @n: int value to be in added to the node
 * Return: 1 is added 0 otherwise
 **/
int push(stack_t **head, int n)
{
return (!!add_dnodeint(head, n));
}

/**
 * pop -
 * @head: pointer to pointer to first node
 * @n: int value to be in added to the node
 * Return: 1 is added 0 otherwise
 **/
int pop(stack_t **head)
{
    stack_t *node = get_dnodeint_at_index(*head, 0);
    int n = 0;

    n = node->n;
    delete_dnodeint_at_index(head, 0);
    return n;
}

/**
 * peek -
 * @head: pointer to pointer to first node
 * @n: int value to be in added to the node
 * Return: 1 is added 0 otherwise
 **/
int peek(stack_t **head)
{
    stack_t *node = get_dnodeint_at_index(*head, 0);

    if (node)
        return (node->n);
    return (FAILURE);
}

/**
 * is_empty -
 * @head: pointer to pointer to first node
 * @n: int value to be in added to the node
 * Return: 1 is added 0 otherwise
 **/
int is_empty(stack_t **head)
{
    return (!get_dnodeint_at_index(*head, 0));
}

/**
 * pall -
 * @head: pointer to pointer to first node
 * @n: int value to be in added to the node
 * Return: 1 is added 0 otherwise
 **/
void pall(stack_t *head)
{
print_dlistint(head);
}

/**
 * opcode_add -
 * @stack: pointer to pointer to first node
 * @n: int value to be in added to the node
 * Return: 1 is added 0 otherwise
 **/
void opcode_add(__attribute__((unused)) stack_t **stack,
                __attribute__((unused)) unsigned int line_number)
{
    int n;
    int m;

    if (!get_dnodeint_at_index(*stack, 1))
    {
        dprintf(STDERR_FILENO, ERR_ADD, data()->line_number);
        free_data(1);
        exit(EXIT_FAILURE);
    }
    n = pop(stack);
    m = pop(stack);
    insert_dnodeint_at_index(stack, 0, n + m);
}

/**
 * opcode_sub -
 * @stack: pointer to pointer to first node
 * @n: int value to be in added to the node
 * Return: 1 is added 0 otherwise
 **/
void opcode_sub(__attribute__((unused)) stack_t **stack,
                __attribute__((unused)) unsigned int line_number)
{
    int n;
    int m;

    if (!get_dnodeint_at_index(*stack, 1))
    {
        dprintf(STDERR_FILENO, ERR_SUB, data()->line_number);
        free_data(1);
        exit(EXIT_FAILURE);
    }
    n = pop(stack);
    m = pop(stack);
    insert_dnodeint_at_index(stack, 0, m - n);
}

/**
 * opcode_div -
 * @stack: pointer to pointer to first node
 * @n: int value to be in added to the node
 * Return: 1 is added 0 otherwise
 **/
void opcode_div(__attribute__((unused)) stack_t **stack,
                __attribute__((unused)) unsigned int line_number)
{
    int n;
    int m;

    if (!get_dnodeint_at_index(*stack, 1))
    {
        dprintf(STDERR_FILENO, ERR_DIV, data()->line_number);
        free_data(1);
        exit(EXIT_FAILURE);
    }
    n = pop(stack);
    m = pop(stack);
    insert_dnodeint_at_index(stack, 0, m / n);
}

/**
 * opcode_mul -
 * @stack: pointer to pointer to first node
 * @n: int value to be in added to the node
 * Return: 1 is added 0 otherwise
 **/
void opcode_mul(__attribute__((unused)) stack_t **stack,
                __attribute__((unused)) unsigned int line_number)
{
    int n;
    int m;

    if (!get_dnodeint_at_index(*stack, 1))
    {
        dprintf(STDERR_FILENO, ERR_MUL, data()->line_number);
        free_data(1);
        exit(EXIT_FAILURE);
    }
    n = pop(stack);
    m = pop(stack);
    insert_dnodeint_at_index(stack, 0, m * n);
}