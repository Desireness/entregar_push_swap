/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 13:22:34 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/22 13:22:38 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(t_list *first, t_list *second)
{
        if (!first || !second)
                return ;
        void    *temp = first->content;
        first->content = second->content;
        second->content = temp;

}

void swap_a(Stack *a)
{
    // Asegúrate de que hay al menos 2 elementos en la pila para hacer swap
    if (!a || !a->top || !a->top->next)
        return;  // Si no hay al menos 2 elementos, no haces el swap

    swap(a->top, a->top->next);  // Intercambia los primeros dos elementos
    printf("sa\n");
}

void swap_b(Stack *b)
{
    // Asegúrate de que hay al menos 2 elementos en la pila para hacer swap
    if (!b || !b->top || !b->top->next)
        return;  // Si no hay al menos 2 elementos, no haces el swap

    swap(b->top, b->top->next);  // Intercambia los primeros dos elementos
    printf("sb\n");
}

void    ss(Stack *a, Stack *b)
{
        swap_a(a);
        swap_b(b);
        printf("ss\n");
}

