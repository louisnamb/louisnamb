char *ft_strdup(const char *s1)
{
    char *s2;
    int p;
    int i;

    i = 0;
    p = 0;
    while (s1[i])
        i++;
    s2 = (char *)malloc(sizeof(char) * (i + 1));
    if (!s2)
        return (NULL);
    while (s1[p])
    {
        s2[p] = s1[p];
        p++;
    }
    return (s2);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char source[] = "GeeksForGeeks";
    char* target = strdup(source);
    char *new_target = ft_strdup(source);

    printf("real: %s\n", target);
    printf("ft: %s", new_target);
    return 0;
}
*/