#include "monty.h"


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
