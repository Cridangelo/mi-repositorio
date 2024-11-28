#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while(lst != NULL)
    {
        count++;
        lst = lst->next;
    }
    
    return (count);
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

//     node1->next = node2;
//     node2->next = NULL;
//     printf("%d \n", ft_lstsize(node1));
//     return (0);
// }
