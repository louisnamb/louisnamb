#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
        	i++;
	return (i);
}

int	num_arrs(const char *str, char c)
{
	int i;

	i = 0;
	while (*str)
	{
        	if (*str == c)
            		i++;
        	str++;
	}
	return (i + 1);
}

char	*up2del(const char *s, int beg, int fin)
{
	char	*str;
	int	i;

	i = 0;
	str = malloc(sizeof(char) * (fin - beg  + 1));
	while (beg < fin)
        	str[i++] = (char)s[beg++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	j;
	int	boolean;
	size_t	i;

	j = 0;
	i = 0;
	boolean = 0;
	if (!s || !(split = malloc(sizeof(char *) * (num_arrs(s, c) + 1))))
		return (0);
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] != c && boolean < 0)
			boolean = i;
		else if ((s[i] == c || i == ft_strlen((char *)s)) && boolean >= 0)
		{
			split[j++] = up2del(s, boolean ,i);
			boolean = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
/*int main()
{
    char *str = "afeafevftexvs";
    char c = 'e';
    int i = 0;
    char **fun = ft_split(str, c);
  //  char **them = ftplit(str, c);
    while (fun[i])
    {
        printf("ft: %s\n", fun[i]);
//        printf(" real: %s\n", them[i]);
        i++;
    }
    /*
    printf("0: %s\n", ft_split(str, c)[0]);
    printf("1: %s\n", ft_split(str, c)[1]);
    printf("2: %s\n", ft_split(str, c)[2]);*/
    return (0);
}*/
