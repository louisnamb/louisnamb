#include <stdlib.h>
#include "libft.h"

typedef struct	s_list
{
	void	*content;
    	struct s_list	*next;
} t_list;

t_list	*ft_lstnew(void *content)
{
    	t_list	*newtype;
    	newtype = (t_list *)malloc(sizeof(t_list));
    	if (!newtype)
        	return (NULL);
    	newtype->content = content;
    	newtype->next = NULL;
    	return (newtype);
}
