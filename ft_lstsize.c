#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

typedef struct	s_list
{
	void	*content;
    	struct s_list	*next;
} t_list;

int ft_lstsize(t_list *lst)
{
    	int	count;

    	count = 0;
    	while (lst != NULL)
    	{
        	lst = lst->next;
        	count++;
    	}
	return (count);
}
/*
int main()
{
    t_list *head = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));

    head->content = 1;
    head->next = second;
    second->content = 2;
    second->next = third;
    third->content = 3;
    third->next = NULL;

    printf("len: %d", ft_lstsize(head));
    /*\ Remember to make "void *content" to "int content"
    return (0);
}*/
