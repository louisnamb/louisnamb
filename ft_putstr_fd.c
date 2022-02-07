#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	if (!s)
        	return (0);
	while (*s)
		write(fd, &*s++, 1);
}