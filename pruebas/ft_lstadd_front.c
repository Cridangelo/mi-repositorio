#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new == NULL)
        return;
    new->next = *lst;
    *lst = new;
}

/*int main(void)
{
    t_list *list = NULL;
    t_list *new_node = malloc(sizeof(t_list));

    if (!new_node)
        return (1);
    new_node->content = "Nuevo mundo";
    new_node->next = NULL;

    printf("%s\n", (char*)list->content);

    ft_lstadd_front(&list, new_node);

    printf("%s\n", (char*)list->content);
    return (0);
}*/
