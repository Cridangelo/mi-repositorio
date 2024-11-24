#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

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

/*int main(void)
{
	t_list *nodo1;
	t_list *nodo2;

	nodo1 = ft_lstnew("Paco", 30);
	nodo2 = ft_lstnew("Pepito", 27);
	nodo2->next = nodo1;
	nodo1->next = NULL;
	printf("%s \n", nodo2->next->content);
	printf("%d \n", nodo1->edad);
	return(0);
}*/