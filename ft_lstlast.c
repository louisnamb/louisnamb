#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
} t_list;

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
        	return (NULL);
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
        	lst = lst->next;
	}
	return (lst);
}
