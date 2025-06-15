#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isdigit(char c)
{
	if ((c >= 48) && (c <= 57))
		return (2048);
	return (0);
}

// int main()
// {
//     char c;
//     c='5';
//     printf("Result when numeric character is passed: %d", isdigit(c));
//     printf("\nResult when numeric character is passed: %d", ft_isdigit(c));

//     c='j';
//     printf("\nResult when non-numeric is passed: %d", isdigit(c));
//     printf("\nResult when non-numeric is passed: %d", ft_isdigit(c));

//     return 0;
// }