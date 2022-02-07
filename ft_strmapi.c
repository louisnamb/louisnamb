#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char    *str;
	int i;

    	i = 0;
    	if (!s || !(str = (char *)malloc(sizeof(char *) * (ft_strlen((char*)s) + 1))))
        	return (NULL);
    	while (s[i++])
        	str[i] = f(i, (char)s[i]);
    	str[i] = '\0';
    	return (str);
}

char	my_func(unsigned int i, char str)
{
    	printf("My inner function: index = %d and %c\n", i, str);
    	return (str - 32);
}
/*
int main()
{
    char str[10] = "hello.";
    printf("The str is %s\n", str);
    char *result = ft_strmapi(str, my_func);
    printf("The result is %s\n", result);
    return 0;
}*/
