/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:27:20 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/22 03:54:06 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

Stack *create_stack()
{
        Stack *stack = malloc(sizeof(Stack));
        if (stack == NULL) return NULL;
        stack->top = NULL;
        stack->size = 0;

        return stack;
}

//We allocated memory for the stack, initialized top as null cuz its empty
//size is = 0 cuz no data yet

void push(Stack *stack, int value)
{
    t_list *new = malloc(sizeof(t_list));
    if (new == NULL) return;
    new->content = malloc(sizeof(int));  // Asignar memoria para el valor
    if (new->content == NULL) {
        free(new);
        return;
    }
    *(int *)(new->content) = value;  // Asignar el valor al contenido

    ft_lstadd_back(&(stack->top), new);  // Agregar al principio de la lista
}

//Node created, linked to the oldest top, top now points to next node.


int pop(Stack *stack)
{
        if(stack->top == NULL) return -1;
        t_list *temp = stack->top;
        int value = *(int *)(temp->content);

        stack->top = temp->next;
        free(temp->content);
        free(temp);
        stack->size--;
        return value;
}

//Value stored in top node, moved top to the next node and we free the erased node.

Stack *stack_initialized(int ac, char **av)
{
        Stack *stack = create_stack();
        int i;

        i = 1;
        if (stack == NULL) return NULL;
        while(i < ac)
        {
                push(stack, atoi(av[i]));
                i++;
        }
        return stack;
}

void show_stack(Stack *stack)
{
        if (!stack) return;
        t_list *actual = stack->top;
        while(actual)
        {
                printf("%d", *(int *)actual->content);
                actual = actual->next;
        }
}

void print_stack(Stack *stack)
{
        t_list *current = stack->top;
        while(current)
        {
                printf("%d->", *(int*)(current->content));
                current = current->next;
        }
        printf("NULL\n");
}

/*int main(int ac, char **av)
{
        if (ac < 2)
        {
                printf("Uso: ./push_swap num1, num2, num3...\n");
                return 1;
        }
        Stack *stack_a = stack_initialized(ac, av);
        if (!stack_a)
        {
        printf("Error: stack not initialized\n");
        return 1;
        }
        printf("Stack initialized:\n");
        show_stack(stack_a);

        return 0;

}*/

