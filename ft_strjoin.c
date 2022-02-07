#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int	i;

	i = 0;	
	if (!(new_str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1))))
		return (NULL);
	while (s1[i] && s2[i])
	{
		new_str[i] = s1[i];
		new_str[i + ft_strlen((char *)s1)] = s2[i];
		i++; 
	}
	return (new_str);
}
/*
int	main()
{
	char *b = "louis";
	char *a = "nambajimana";
	printf("new_str: %s", ft_strjoin(b, a));	
	return (0);
}*/