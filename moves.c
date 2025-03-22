/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 19:39:18 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/22 03:43:03 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_list *first, t_list *second)
{
    if (!first || !second)
        return;

    void *temp = first->content;
    first->content = second->content;
    second->content = temp;

        printf("sa\n");
}


void ss(Stack *a, Stack *b)
{
        swap(a->top, a->top->next);
        swap(b->top, b->top->next);

        printf("ss\n");
}


void    push_ab(Stack *a, Stack *b)
{
        t_list *temp;

        if (a->top == NULL)
                return ;
        temp = a->top;
        a->top = a->top->next;
        temp->next = b->top;
        b->top = temp;

        printf("pb\n");

}
void    rotate(Stack *stack)
{
        t_list *temp;
        t_list *current;

        if (!stack || !stack->top || !stack->top->next)
                return ;
        temp = stack->top;
        stack->top = temp->next;

        current = stack->top;
        while(current->next)
        {
                current = current->next;
        }
        current->next = temp;
        temp->next = NULL;

        printf("ra\n");
}


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

        printf("rra\n");
}


//testeando movimiento swap.
/*int main()
{
        t_list  *a = ft_lstnew(ft_strdup("1"));
        t_list  *b = ft_lstnew(ft_strdup("2"));

        a->next = b;

        printf("Antes de swap: %s -> %s\n", (char *)a->content, (char *)b->content);
        swap(a, b);
        printf("Después de swap: %s -> %s\n", (char *)a->content, (char *)b->content);

        return 0; 

}*/

//testeando movimiento ss

/*int main()
{
        Stack *a = create_stack();
        Stack *b = create_stack();

        push(a, 1);
        push(a, 2);
        push(b, 1);
        push(b, 2);

        printf("Antes de ss:\n");
        print_stack(a);
        print_stack(b);

        ss(a, b);

        printf("Despues de ss:\n");
        print_stack(a);
        print_stack(b);


        return 0;
}*/


//testeando movimiento push_ab
/*int main()
{
        Stack *a = create_stack();
        Stack *b = create_stack();

        push(a, 5);
        push(a, 10);
        push(a, 20);
        printf("Antes de push_ab:\n");

        print_stack(a);
        print_stack(b);

        push_ab(a, b);

        printf("Despues de push_ab:\n");

        print_stack(a);
        print_stack(b);

        return (0);
}*/


//Testeando rotate
/*int main()
{
        Stack *a = create_stack();

        push(a, 1);
        push(a, 2);
        push(a, 3);

        printf("Antes de rotate:\n");

        print_stack(a);

        rotate(a);

        printf("Despues de rotate:");

        print_stack(a);
        return 0;

}*/


//Testeando reverse_rotate

/*int main()
{
        Stack *a = create_stack();

        push(a, 1);
        push(a, 2);
        push(a, 3);
        print_stack(a);

        printf("Stack antes del reverserotate:\n");

        reverse_rotate(a);

        printf("Despues del reverserotate:\n");

        print_stack(a);

        return 0;

}*/



/*int main()
{
        Stack  *a = create_stack();

        push(a, 5);
        push(a, 2);
        push(a, 9);
        push(a, 8);
        push(a, 1);
        push(a, 4);

        printf("Stack actual:\n");
        print_stack(a);

        t_list *min_node = find_min(a);

        if(min_node)
                printf("El minimo encontrado es: %d\n", *(int*)(min_node->content));
        else
                printf("Error: Stack vacío o problema con find_min.\n");

        return  0;

}*/
