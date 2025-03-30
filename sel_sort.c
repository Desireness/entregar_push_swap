/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sel_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 03:44:16 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/24 17:15:52 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *find_min(Stack *a)
{
        if (!a || !a->top)
                return NULL;

        t_list *current = a->top;
        t_list *min = current;

        while(current)
        {
                if (*(int*)(current->content) < *(int *)(min->content))
                        min = current;
                current =  current->next;
        }
        return min;

}

void    move_min_top(Stack *a)
{
        t_list *min = find_min(a);
        t_list *current = a->top;
        int pos = 0;
        int size = ft_lstsize(a->top);


	if (a->top == min)
		return ;

        while(current && current != min)
        {
                current = current->next;
                pos++;
        }
	
	if (pos == 1)
	{
		swap_a(a);
		return ;
	}

        if (pos <= size / 2)
        {
                while (pos--)
                        rotate_a(a);
        }
        else
        {
                pos = size - pos;
                while(pos--)
                        reverse_rotate_a(a);
        }
}


/*void selection_sort(Stack *a, Stack *b)
{
    int size = ft_lstsize(a->top);

    for (int i = 0; i < size; i++)
    {
        move_min_top(a);  // Mueve el mínimo al tope de la pila
        push_b(a, b);     // Mueve el mínimo a la pila auxiliar
    }

    while (b->top)
    {
        push_a(a, b);  // Devuelve los elementos de `b` a `a` (ya ordenados)
    }
}*/
void    selection_sort(Stack *a, Stack *b)
{
        while(a->top)
        {
                move_min_top(a);
                push_b(a, b);
        }

	//printf("Stack B despues de mover todo:\n");
	//print_stack(b);	

        while(b->top)
        {
                push_a(a, b);
        }
}

int is_valid_number(const char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')  // Si no es un número
            return 0;
        str++;
    }
    return 1;
}

/*void free_stack(Stack *stack)
{
    t_list *temp;

    while (stack->top)
    {
        temp = stack->top;
        stack->top = stack->top->next;
        free(temp);
    }
    free(stack);
}*/


//MINIMO ENCONTRADO!!!

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

//Mover el minimo hacia el top
//LO MUEVE AL PRINCIPIO!!

/*int main()
{
        Stack *a = create_stack();

        push(a, 5);
        push(a, 2);
        push(a, 9);
        push(a, 8);
        push(a, 1);
        push(a, 4);

        printf("Stack antes de mover el min al top:\n");
        print_stack(a);

        move_min_top(a);

        printf("Stack despues de mover el min al top:\n");
        print_stack(a);

        return 0;

}*/

//selection sort, prueba 1

/*int main()
{
        Stack *a = create_stack();

        push(a, 5);
        push(a, 2);
        push(a, 9);
        push(a, 8);
        push(a, 1);
        push(a, 4);

        printf("Stack antes de selection sort:\n");
        print_stack(a);

        selection_sort(a);

        printf("Stack despues de selection sort:\n");
        print_stack(a);

        return 0;
}*/

/*int main()
{
    // Usamos create_stack para crear los stacks
    Stack *a = create_stack();
    Stack *b = create_stack();

    // Insertar valores desordenados en el stack A
    push(a, 5);
    push(a, 2);
    push(a, 9);
    push(a, 8);
    push(a, 1);
    push(a, 4);

    printf("Stack A antes de selection_sort:\n");
    print_stack(a);

    selection_sort(a, b);  // Pasamos ambos stacks como argumento

    printf("Stack A después de selection_sort:\n");
    print_stack(a);
    printf("Stack B después de selection_sort:\n");
    print_stack(b);  // Si también quieres ver B

    // Liberar memoria de los stacks al final si es necesario
    free(a);
    free(b);

    return 0;
}*/

int main(int argc, char **argv)
{
    Stack *a = create_stack();
    Stack *b = create_stack();

    if (argc < 2)
    {
        printf("Debes ingresar al menos un número como argumento.\n");
        return 1;
    }
    for (int i = 1; i < argc; i++)
    {
        if (!is_valid_number(argv[i]))
        {
            printf("Argumento inválido: %s\n", argv[i]);
            return 1;
        }
        
        int num = atoi(argv[i]); 
        push(a, num);
    }

    //printf("Stack A antes de selection_sort:\n");
    //print_stack(a);

    selection_sort(a, b);  // Realizar la ordenación con la función selection_sort

    //printf("Stack A después de selection_sort:\n");
    //print_stack(a);
    //printf("Stack B después de selection_sort:\n");
    //print_stack(b);

    free(a);
    free(b);
    return 0;

}

/*int main(int argc, char **argv)
{
    Stack *a;
    Stack *b;
    int i;
    char **args;

    if (argc < 2)
        return (1); // No hay argumentos, terminamos el programa

    a = create_stack();
    b = create_stack();

    if (argc == 2) // Si hay solo un argumento con varios números
        args = ft_split(argv[1], ' ');
    else
        args = argv + 1; // Usamos los argumentos de forma normal

    i = 0;
    while (args[i])
    {
        push(a, ft_atoi(args[i])); // Utilizamos tu función `push`
        i++;
    }

    selection_sort(a, b);

  //  free_stack(a); // Asegúrate de liberar la memoria
//    free_stack(b);

    if (argc == 2) // Si usas `ft_split`, libera la memoria
    {
        i = 0;
        while (args[i])
            free(args[i++]);
        free(args);
    }

    return (0);
}*/

