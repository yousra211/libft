#include "libft.h"
#include <stdio.h>

void del(void *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);

void print(t_list *lst)
{
    while (lst != NULL)
    {
        printf("%d\n", *(int *)lst->content);
        lst = lst->next;
    }
}


int main(void)
{
	t_list *lst = NULL;
    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));
    *a = 1;
    *b = 3;
    *c = 4;


    ft_lstadd_front(&lst, ft_lstnew(a));
    ft_lstadd_front(&lst, ft_lstnew(b));
    ft_lstadd_front(&lst, ft_lstnew(c));

	print(lst);
	ft_lstdelone(lst, &del);
	lst = lst->next;
	print(lst);

	    while (lst)
    {
        t_list *tmp = lst->next;
        ft_lstdelone(lst, &del);
        lst = tmp;
    }
}