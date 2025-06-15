#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// int main()
// {
//     char c;
//     int result;

//     c = 'a';
//     result = isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = 'z';
//     result = isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = 'A';
//     result = isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = '+';
//     result = isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     return 0;
// }