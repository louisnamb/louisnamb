#include "libft.h"
#include <stdio.h>
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*
#include <unistd.h>
#include <stdio.h>

int main()
{
    int b = 234;
    int d = 1; 
    printf("%d\n", ft_putnbr_fd(b, d));
}*/
