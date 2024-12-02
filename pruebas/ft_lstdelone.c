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
void ft_lstdelone(t_list *lst, void(*del)(void *))
{
    if(!lst || !del)
        return ;
    del(lst->content);
    free(lst);
}

// void my_del(void *content)
// {
//     free(content);
// }

// int main()
// {
//     t_list *node1 = ft_lstnew("paco");
//     t_list *node2 = ft_lstnew("pedro");
//     t_list *node3 = ft_lstnew("pepito");
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;
    
//     t_list *lst = node1;
//     while (lst)
//     {
//         printf("%s \n", (char *)lst->content);
//         lst = lst->next;
//     }
//     ft_lstdelone(node1, my_del);
//     lst = node2;
//     while (lst)
//     {
//         printf("%s \n", (char *)lst->content);
//         lst = lst->next;
//     }
//     return (0);
// }