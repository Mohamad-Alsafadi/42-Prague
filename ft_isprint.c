#include <stdio.h>
#include "libft.h"

int	ft_isprint(char c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}

// int main(void)
// {
//     printf("%d\n", ft_isprint(' '));
//     printf("%d\n", isprint(' '));
//     printf("%d\n", ft_isprint('='));
//     printf("%d\n", isprint('='));
// }