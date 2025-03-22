/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:09:13 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/22 13:54:14 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pushgeneral(Stack *src, Stack *dest)
{       
        t_list *temp;
        
        if (!src || !src->top)
                return ;

        temp = src->top;
        src->top = src->top->next;
        temp->next = dest->top;
        dest->top = temp;

}

void    push_a(Stack *a, Stack *b)
{
        if (!b || !b->top)
                return ;

        //printf("Antes de push_a:\n");
        //print_stack(a);
        //print_stack(b);

        pushgeneral(b, a);
        printf("pa\n");

        //printf("Después de push_a:\n");
        //print_stack(a);
        //print_stack(b);
}

void    push_b(Stack *a, Stack *b)
{
        if (!a || !a->top)
                return ;

        //printf("Antes de push_a:\n");
        //print_stack(a);
        //print_stack(b);

        pushgeneral(a, b);
        printf("pb\n");

       // printf("Después de push_a:\n");
       // print_stack(a);
       // print_stack(b);
}

