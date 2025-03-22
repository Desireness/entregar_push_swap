/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 13:24:54 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/22 13:24:59 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
        
}

void    rotate_a(Stack *a)
{
        rotate(a);
        printf("ra\n");
}

void    rotate_b(Stack *b)
{
        rotate(b);
        printf("rb\n");
}

void    rr(Stack *a, Stack *b)
{
        rotate(a);
        rotate(b);
        printf("rr\n");
}
