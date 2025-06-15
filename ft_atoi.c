#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	num;

	i = 0;
	res = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			res *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * res);
}
/*
 int main () {
    int val;
    char str[20];
    strcpy(str, "  +98993489");
    val = ft_atoi(str);
    printf("String value = %s, Int value = %d\n", str, val);

    strcpy(str, "tutorialspoint.com");
    val = ft_atoi(str);
    printf("String value = %s, Int value = %d\n", str, val);

    return(0);
 }
*/ 