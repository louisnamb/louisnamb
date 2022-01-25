#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char up2del(char *s, int beg, int fin)
{
    int i;
    char *str;
    
    i = 0;
    if (!str = malloc(sizeof(char) * fin + 1));
    while (s[i] && i < fin)
    {
        str[i] = s[i];
        i++;
    }

    return (str);
}

char **ft_split(char const *str, char c)
{
    char **split;
    char *sub_split;
    int j;
    int boolean1;
    int i;

    j = 0;
    i = 0;
    boolean1 = 0;
    if (!str || !(sub_split = (char *)malloc(sizeof(char) * (up2del(str, c) + 1))))
        return (NULL);
    while (i < ft_strlen(str))
    {
        if (str[i] != c && boolean1 == 0)
        {
            boolean1 = 1
        }
        else if ((str[i] == c || i == ft_strlen(str)) && boolean1 != 0)
        {
            split[j] = up2del(str, boolean1 ,i);
            j++;
            boolean1 = 0;
        }
        i++;
    }
    return (split);
}

int main()
{
    char *p = "heefgrd";
    char j = 'f';
    printf("ft: %s", ft_split(p, j)[0]);
    return (0);
}