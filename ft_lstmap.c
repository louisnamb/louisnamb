#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
typedef struct	s_list
{
	void	*content;
	struct s_list *next;
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

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
        	return (NULL);
    	while (lst->next != NULL)
        	lst = lst->next;
   	return (lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!*lst)
        	return;
	while (*lst != NULL)
	{
		del((*lst)->content);
		temp = *lst;
		*lst = temp->next;
		free(temp);
	}
	*lst = NULL;
}

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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list  *new_list;
	t_list  *new_elem;
	
	new_elem = NULL;
	while (lst)
	{
		if (!(new_list = ft_lstnew((f)(lst->content))))
		{
			ft_lstclear(&new_elem, del);
			return (NULL);
		}
		ft_lstadd_back(&new_elem, new_list);
		lst = lst->next;
	}
	return (new_list);
}
