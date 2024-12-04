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
    t_list *new_lst = NULL;
    t_list *new_node = NULL;
    t_list *current = NULL;

    while(lst)
    {
        new_node = ft_lstnew(f(lst->content));
        if (!new_node)
        {
            ft_lstclear(&new_lst, del);
            return(NULL);
        }
        if (!new_lst)
            new_lst = new_node;
        else
            current->next = new_node;
        current = new_node;
        lst = lst->next;
    }
    return (new_lst);
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
