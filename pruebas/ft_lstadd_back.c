#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(*lst == NULL)
        *lst = new;
    else
    {
        t_list *temp;
        
        temp = *lst;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = new;
    }
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

// void print_lst(t_list *lst)
// {
//         while(lst != NULL)
//     {
//         printf("%s , ", (char *)lst->content);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }

// int main()
// {
//     t_list *node1 = ft_lstnew("paco");
//     t_list *node2 = ft_lstnew("pedro");
//     t_list *node3 = ft_lstnew("pepito");
//     t_list *node4 = ft_lstnew("peine");
//     t_list *new_node = ft_lstnew("nuevo");

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;
//     node4->next = NULL;

//     print_lst(node1);
//     ft_lstadd_back(&node1, new_node);
//     printf("\n");
//     print_lst(node1);
//     return (0);
// }