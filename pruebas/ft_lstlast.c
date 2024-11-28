#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

t_list *ft_lstlast(t_list *lst)
{
    if(lst == NULL)
        return (NULL);
    while (lst->next != NULL)
        lst = lst->next;
    return(lst);
}
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

// int main()
// {
//     t_list *node1 = ft_lstnew("paco");
//     t_list *node2 = ft_lstnew("pedro");
//     t_list *node3 = ft_lstnew("pepe");

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     printf("%s \n", (char *)ft_lstlast(node1)->content);
//     return (0);
// }
