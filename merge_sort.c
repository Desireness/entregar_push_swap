/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:05:07 by rauizqui          #+#    #+#             */
/*   Updated: 2025/03/24 19:27:17 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//este funciona

/*void split_stack(Stack *a, Stack *b)
{
    int size = ft_lstsize(a->top);
    int mid = size / 2;
    int i = 0;
    int *values = malloc(sizeof(int) * size); // Buffer para almacenar valores
    t_list *temp = a->top;

    if (!values)
        return;

    while (temp)
    {
        values[i++] = *(int *)temp->content;
        temp = temp->next;
    }

    while (a->top)
        pop(a);

    for (i = 0; i < size; i++)
    {
        if (i < mid)
            push(a, values[i]); // Primera mitad en A
        else
            push(b, values[i]); // Segunda mitad en B
    }

    free(values);
}

// void split_stack(Stack *a, Stack *b)
// {
//     int size = ft_lstsize(a->top);  // Obtener el tamaño de la pila A
//     int mid = size / 2;             // Dividir en dos mitades
//     int i = 0;
//     t_list *temp = a->top;

//     Vaciar las pilas A y B
//     while (a->top)
//     {
//         pop(a);  // Vaciar la pila A completamente
//     }

//     Recorremos la pila original para dividirla
//     for (i = 0; i < size; i++)
//     {
//         if (i < mid)
//         {
//             Poner la primera mitad en A
//             push(a, *(int *)temp->content);
//         }
//         else
//         {
//             Poner la segunda mitad en B
//             push(b, *(int *)temp->content);
//         }
//         temp = temp->next;  // Avanzamos al siguiente nodo
//     }
// }




// este funciona pero es simple

void merge_stacks(Stack *a, Stack *b)
{
    while (b->top)  // Mientras haya elementos en B
    {
        push_a(a, b);  // Simplemente mueve el elemento de B a A
    }
}


// void merge_stacks(Stack *a, Stack *b)
// {
//     Stack merged;         // Puntero para la lista fusionada
//     merged.top = NULL;    // Inicializamos la pila fusionada vacía
//     t_list *temp_a = a->top;
//     t_list *temp_b = b->top;

//     // Fusionar las pilas A y B de manera ordenada
//     while (temp_a && temp_b)
//     {
//         if (*(int *)temp_a->content <= *(int *)temp_b->content)
//         {
//             push(&merged, pop(a));  // Extraemos de A y lo añadimos a merged
//             temp_a = a->top;        // Avanzamos el puntero de A
//         }
//         else
//         {
//             push(&merged, pop(b));  // Extraemos de B y lo añadimos a merged
//             temp_b = b->top;        // Avanzamos el puntero de B
//         }
//     }

//     // Si quedan elementos en A o B, los agregamos
//     while (temp_a)
//     {
//         push(&merged, pop(a));  // Extraemos de A y lo añadimos a merged
//         temp_a = a->top;        // Avanzamos el puntero de A
//     }

//     while (temp_b)
//     {
//         push(&merged, pop(b));  // Extraemos de B y lo añadimos a merged
//         temp_b = b->top;        // Avanzamos el puntero de B
//     }

//     // Asignar la pila fusionada a A
//     a->top = merged.top;  // Asignar el top de merged a A
//     b->top = NULL;        // B debería quedar vacía
// }



// void merge_sort(Stack *a, Stack *b)
// {
//     if (ft_lstsize(a->top) <= 1)
//         return;

//     printf("Antes de split_stack:\n");
//     print_stack(a);
//     print_stack(b);

//     split_stack(a, b);  // Divide la pila

//     printf("Después de split_stack:\n");
//     print_stack(a);
//     print_stack(b);

//     merge_sort(a, b);  // Recursión sobre a y b
//     merge_sort(b, a);

//     printf("Antes de merge_stacks:\n");
//     print_stack(a);
//     print_stack(b);

//     merge_stacks(a, b);  // Fusiona las pilas

//     printf("Después de merge_stacks:\n");
//     print_stack(a);
//     print_stack(b);
// }

int main(int argc, char **argv)
{/
    t_list *node;
    int i;
    int *value;

    // Inicializar las pilas
    a.top = NULL;
    b.top = NULL;

    // Llenamos la pila A con los argumentos pasados
    for (i = 1; i < argc; i++)
    {
        value = malloc(sizeof(int));  // Reservar memoria para un entero
        *value = ft_atoi(argv[i]);   // Asignar el valor convertido a int

        node = ft_lstnew((void *)value);  // Pasar el puntero a int como void *
        ft_lstadd_back(&a.top, node);     // Añadimos el nodo a la pila A
    }

    // Aquí puedes ver el contenido de A antes de cualquier operación
    printf("Antes de merge_sort:\n");
    print_stack(&a);  // Asegúrate de tener una función para imprimir la pila

    // Ejecutamos merge_sort o cualquier algoritmo de ordenación en las pilas
    merge_sort(&a, &b);  // Si haces merge_sort, asegúrate de pasar las pilas correctamente

    // Imprimimos las pilas después del sort
    printf("Después de merge_sort:\n");
    print_stack(&a);

    return 0;
}*/




/*int main(int argc, char **argv)
{
    Stack *a;
    Stack *b;
    int i;

    // Comprobamos si hay suficientes argumentos
    if (argc < 2)
        return (1); // Si no hay argumentos, termina el programa

    a = create_stack();  // Creamos las pilas A y B
    b = create_stack();

    // Parseamos los argumentos y los agregamos a la pila A
    for (i = 1; i < argc; i++)  // Empezamos desde 1 porque argv[0] es el nombre del programa
    {
        push(a, ft_atoi(argv[i]));  // Convertimos los argumentos a enteros y los agregamos a la pila A
    }

    // Imprimimos la pila A antes de ordenarla
    printf("Antes de merge_sort:\n");
    printf("Pila A: ");
    print_stack(a);
    printf("Pila B: ");
    print_stack(b);

    // Llamamos a merge_sort para ordenar la pila A
    merge_sort(a, b);

    // Imprimimos la pila A después de ordenarla
    printf("\nDespués de merge_sort:\n");
    printf("Pila A: ");
    print_stack(a);
    printf("Pila B: ");
    print_stack(b);  // Debería estar vacía, ya que todo debería haberse fusionado en A

    // Liberamos la memoria si es necesario
//    free_stack(a);
  //  free_stack(b);

    return (0);
}*/


// Función para dividir en múltiples stacks (tu split_stack modificado)
/*void split_in_chunks(Stack *a, Stack **chunks, int *num_chunks) 
{
    int chunk_size = 5;
    *num_chunks = 0;
    
    while (a->top) 
    {
        chunks[*num_chunks] = create_stack();
        
        // Extraer chunk de 5 elementos
        for (int i = 0; i < chunk_size && a->top; i++) {
            push(chunks[*num_chunks], pop(a));
        }
        
        (*num_chunks)++;
    }
}


void turbo_charged_sort(Stack *a, Stack *b) {
    // 1. Dividir en chunks ordenados
    while (a->top) {
        Stack *chunk = create_stack();
        int chunk_size = ft_lstsize(a->top) > 5 ? 5 : ft_lstsize(a->top);
        
        // Extraer chunk
        for (int i = 0; i < chunk_size; i++) {
            push(chunk, pop(a));
        }
        
        // Ordenar el chunk con TU selection_sort
        Stack *temp_b = create_stack();
        while (chunk->top) {
            t_list *min = find_min(chunk);
            move_min_top(chunk, min);
            push_b(chunk, temp_b);
        }
        
        // Pasar a B (orden descendente)
        while (temp_b->top) {
            push_b(temp_b, b);
        }
        
        free(chunk);
        free(temp_b);
    }
    
    // 2. Merge final inteligente
    while (b->top) {
        t_list *max = find_max(b);  // Necesitarás implementar find_max
        move_max_to_top(b, max);    // Y esta función
        push_a(b, a);
    }
}
// Versión mínima de is_sorted (solo para pruebas)
static int is_sorted(Stack *s) {
    t_list *current = s->top;
    while (current && current->next) {
        if (*(int*)current->content > *(int*)current->next->content)
            return 0;
        current = current->next;
    }
    return 1;
}

void print_operation(const char *op) {
    printf("\e[33m%s\e[0m\n", op); // Amarillo para las operaciones
}

void debug_stacks(Stack *a, Stack *b) {
    printf("\nA: ");
    print_stack(a);
    printf("B: ");
    print_stack(b);
    printf("---\n");
}*/

/*int main(int argc, char **argv) 
{
    Stack *a = create_stack();
    Stack *b = create_stack();
    
    // Cargar datos desde argumentos
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            push(a, atoi(argv[i]));
        }
    } else {
        // Datos de prueba por defecto
        int default_data[] = {2, 3, 54, 6};
        for (int i = 0; i < 4; i++) {
            push(a, default_data[i]);
        }
    }

    printf("=== INICIO ===\n");
    debug_stacks(a, b);

    // Ejecutar tu algoritmo
    turbo_charged_sort(a, b);

    printf("\n=== RESULTADO FINAL ===\n");
    debug_stacks(a, b);
    printf("Ordenado? %s\n", is_sorted(a) ? "\e[32mSÍ ✅\e[0m" : "\e[31mNO ❌\e[0m");

    // Liberar memoria
    free(a);
    free(b);
    return 0;
}*/
/*int main(int argc, char **argv)
{
    Stack *a;
    Stack *b;
    int i;
    char **args;

    // Verificamos si hay argumentos
    if (argc < 2)
        return (1); // No hay argumentos, terminamos el programa

    a = create_stack();  // Creamos la pila A
    b = create_stack();  // Creamos la pila B

    // Parseamos los argumentos y los agregamos a la pila A
    if (argc == 2)  // Si hay solo un argumento con varios números
        args = ft_split(argv[1], ' ');  // Partimos los números
    else
        args = argv + 1;  // Usamos los argumentos de forma normal

    // Llenamos la pila A con los números pasados en los argumentos
    i = 0;
    while (args[i])
    {
        push(a, ft_atoi(args[i]));  // Utilizamos `push` para agregar a la pila A
        i++;
    }

    // Insertamos algunos elementos en la pila B para probar la fusión
    push(b, 1);
    push(b, 2);
    push(b, 3);
    push(b, 4);
    push(b, 5);
    push(b, 6);

    // Imprimimos las pilas antes de la fusión
    printf("Antes de merge_stacks:\n");
    printf("Pila A: ");
    print_stack(a);  // Mostrar pila A
    printf("Pila B: ");
    print_stack(b);  // Mostrar pila B

    // Llamamos a `merge_stacks` para fusionar `b` en `a`
    merge_stacks(a, b);

    // Imprimimos las pilas después de la fusión
    printf("\nDespués de merge_stacks:\n");
    printf("Pila A: ");
    print_stack(a);  // Debería tener todos los elementos de A y B
    printf("Pila B: ");
    print_stack(b);  // Debería estar vacía

    // Liberamos la memoria si usamos `ft_split`
    if (argc == 2)
    {
        i = 0;
        while (args[i])
            free(args[i++]);  // Liberamos los elementos de `args`
        free(args);  // Liberamos el arreglo `args` completo
    }

    return (0);
}*/



/*int main()
{
    Stack *a = create_stack();
    Stack *b = create_stack();

    int values[] = {8, 3, 7, 1, 9, 5, 2, 6, 4};
    int size = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < size; i++)
        push(a, values[i]);

    printf("Pila original:\n");
    print_stack(a);

    split_stack(a, b);

    printf("Después de dividir:\n");
    printf("Pila A:\n");
    print_stack(a);
    printf("Pila B:\n");
    print_stack(b);

    return 0;
}*/

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

    merge_sort(a, b);

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










