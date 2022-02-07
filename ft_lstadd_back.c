#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_list;

    	if (!new)
        	return ;
    	if (!*lst == NULL)
        	*new_list = new;
    	new_list = ft_lstlast(*lst);
    	new_list->next = new;
}
