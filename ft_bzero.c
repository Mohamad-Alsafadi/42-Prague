#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// int main () {
//    char str[50] = "This is string.h library function";
//    printf("%s\n",str);
//    ft_bzero(str, 7);
//    printf("%s\n",str);
//    return(0);
// }