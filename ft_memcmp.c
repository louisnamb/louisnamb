#include <string.h>
#include <stdio.h>
#include "libft.h"

int		ft_memcmp(void *s1, void *s2, size_t n)
{
    unsigned char *mem_s1;
    unsigned char *mem_s2;
    size_t i;

    mem_s1 = (unsigned char *)s1;
    mem_s2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (mem_s1[i] != mem_s2[i] || (ft_strlen(s1) == 0))
        {
            return (mem_s1[i] - mem_s2[i]);
        }
        i++;
    }
    return (0);
}
/*
int main()
{
    char *arr = "fghjhj";
    char *ok = "fghjhj";
    int i = 4;
    printf("real: %d\n", memcmp(arr, ok, i));
    printf("ft: %d\n", ft_memcmp(arr, ok, i));
    return (0);
}*/