#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	arr;
	int	i;
	int	sign;

	arr = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '-') || (str[i] == '='))
	{
		if (str[i+1] == '-' || str[i+1] == '+')
			return (0);
		else if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		arr = arr * 10 + (str[i] - 48);
		i++;
	}
	return (sign * arr);
}

int example(const char *str)
{
	int	sum;
	int	sign;
	int	found;

	sum = 0;
	sign = 1;
	found = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && found)
	{
		if (*str >= '0' && *str <= '9')
			sum = sum * 10 + *str - '0';
		else
			found = 0;
		str++;
	}
	return (sign * sum);
}
int main () 
{
   	int val;
   	char str[20];
   
   	strcpy(str, "98993489");
   	val = atoi(str);
   	printf("rea: %d\n", val);
   	val = ft_atoi(str);
   	printf("ft: %d\n", val);
	val = example(str);
	printf("their: %d\n\n", val);

   	strcpy(str, "tutorialspoint.com");
   	val = atoi(str);
   	printf("real: %d\n", val);
   	val = ft_atoi(str);
	printf("ft: %d\n", val);
	val = example(str);
	printf("their: %d\n\n", val);
   return(0);
}
