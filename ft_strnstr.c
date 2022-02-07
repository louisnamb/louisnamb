#include <string.h>
#include <stdio.h>
#include "libft.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    j = 0;
    i = 0;
    while (i < len)
    {
        if (haystack[i] == needle[j])
            j++;
        if (j == (size_t)ft_strlen(needle)])
            return (haystack + (ft_strlen(haystack) - j));
        i++;
    }
    // return vals
    if (needle == NULL)
        return (haystack);
    else if (i == (size_t)ft_strlen(haystack))
        return (NULL);
    else
        return (haystack[i]);
}
/*
int main()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Baz";
    int i = 5;
    printf("%s\n", largestring + 5);
    printf("%d %s\n", i, strnstr(largestring, smallstring, i));
    i++;
}*/