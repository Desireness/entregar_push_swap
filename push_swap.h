/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:19:41 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/22 13:32:14 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft.h"  // Si usas listas de la libft
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>


typedef struct Stack
{
        t_list *top;
        int size;
} Stack;


//void    push_ab(Stack *a, Stack *b);

void    swap_values(t_list *i, t_list *j);
void swap(t_list *first, t_list *second);
void ss(Stack *a, Stack *b);
void    swap_a(Stack *stack);
void    swap_b(Stack *b);
void push(Stack *stack, int value);
void    pushgeneral(Stack *src, Stack *dest);
void    push_a(Stack *a, Stack *b);
void    push_b(Stack *a, Stack *b);
void    rotate(Stack *stack);
void    rotate_a(Stack *a);
void    rotate_b(Stack *b);
int pop(Stack *stack);
void    reverse_rotate(Stack *stack);
void reverse_rotate_a(Stack *a);
void reverse_rotate_b(Stack *b);
void reverse_rotate_ab(Stack *a, Stack *b);
void    reverse_rotate(Stack *stack);
void    rotate(Stack *stack);
Stack *stack_initialized(int ac, char **av);
void show_stack(Stack *stack);
Stack *create_stack();
void print_stack(Stack *stack);
t_list *pivot(Stack *stack);
void    partition(Stack *a, Stack *b, int pivot);
t_list *find_min(Stack *a);


#endif

