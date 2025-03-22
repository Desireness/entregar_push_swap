#include "push_swap.h"

void    reverse_rotate(Stack *stack)
{
        t_list *temp;
        t_list *current;

        if (!stack || !stack->top->next)
                return ;
        current = stack->top;
        while(current->next != NULL)
        {
                current = current->next;
        }
        temp = current;
        current = stack->top;
        while(current->next != temp)
        {
                current = current->next;
        }
        current->next = NULL;
        temp->next = stack->top;
        stack->top = temp;
}

void reverse_rotate_a(Stack *a)
{
    reverse_rotate(a);  // Llamamos a la función genérica para realizar el reverse_rotate en la pila a
    printf("rra\n");     // Imprimimos el mensaje específico para 'a'
}

void reverse_rotate_b(Stack *b)
{
    reverse_rotate(b);  // Llamamos a la función genérica para realizar el reverse_rotate en la pila b
    printf("rrb\n");     // Imprimimos el mensaje específico para 'b'
}

void reverse_rotate_ab(Stack *a, Stack *b)
{
    reverse_rotate(a);  // Llamamos a la función genérica para 'a'
    reverse_rotate(b);  // Llamamos a la función genérica para 'b'
    printf("rrr\n");     // Imprimimos el mensaje para el caso en el que ambas pilas rotan
}

