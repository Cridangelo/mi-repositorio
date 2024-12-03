#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

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

// void ft_lstdelone(t_list *lst, void(*del)(void *))
// {
//     if(!lst || !del)
//         return ;
//     del(lst->content);
//     free(lst);
// }

// t_list *ft_lstnew(void *content)
// {
// 	t_list	*new_node;
// 	new_node = (t_list *)malloc(sizeof(t_list)); 
// 	if (!new_node)
// 		return (NULL);
// 	new_node->content = content;
// 	new_node->next = NULL;
// 	return (new_node);
// }

// void my_del(void *content)
// {
//     free(content);
// }

// void print_lst(t_list *lst)
// {
// 	if (!lst)
// 	{
// 		printf("La lista esta vacia");
// 		return;
// 	}
	
// 	while(lst != NULL)
//     {
//         printf("%s , ", (char *)lst->content);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }

// int main()
// {
// 	t_list *node1 = ft_lstnew("paco");
// 	t_list *node2 = ft_lstnew("pedro");
// 	t_list *node3 = ft_lstnew("pepito");

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
	
// 	print_lst(node1);

// 	ft_lstclear(&node1, my_del);
// 	print_lst(node1);

// 	return(0);
// }
