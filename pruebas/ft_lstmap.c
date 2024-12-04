#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;


t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_lst = NULL;    // Nueva lista vacía
    t_list *new_node = NULL;   // Nodo temporal para agregar
    t_list *current = NULL;    // Puntero auxiliar para recorrer la nueva lista

    while (lst)  // Iterar sobre la lista original
    {
        new_node = ft_lstnew(f(lst->content));  // Crear un nuevo nodo con el contenido transformado
        if (!new_node)  // Si malloc falla
        {
            // Liberar todos los nodos creados antes de devolver NULL
            ft_lstclear(&new_lst, del);  
            return (NULL);
        }

        if (!new_lst)  // Si es el primer nodo de la nueva lista
            new_lst = new_node;  
        else  // Si ya hay nodos en la nueva lista
            current->next = new_node;  // Conectar el nodo a la lista

        current = new_node;  // Mover el puntero auxiliar
        lst = lst->next;  // Avanzar al siguiente nodo en la lista original
    }

    return (new_lst);  // Retornar la nueva lista
}


t_list *ft_lstnew(void *content)
{
	t_list	*new_node;
	new_node = (t_list *)malloc(sizeof(t_list)); 
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;
	t_list *current;

	current = *lst;

    while(current)
	{
		temp = current->next;
		ft_lstdelone(current, del);
		current = temp;
	}
	*lst = NULL;
}
