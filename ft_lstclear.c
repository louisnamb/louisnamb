#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!*lst || !lst || !*del)
        	return;
    	while (*lst)
    	{
		temp = (*lst)->next;
        	ft_lstdelone((*lst)->content);
		*lst = temp;
    	}
    	*lst = NULL;
}
