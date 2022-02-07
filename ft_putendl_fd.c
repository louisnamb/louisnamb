#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
        	return (0);
    	while (*s)
        	write(fd, &*s++, 1);
    	write(1, "\n", 1);
}
