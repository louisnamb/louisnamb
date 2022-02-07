#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
} t_list;

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
    	free(lst);
	lst = NULL;
}
