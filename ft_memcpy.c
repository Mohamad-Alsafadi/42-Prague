#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*src_str;
	char			*dest_str;

	src_str = (char *)src;
	dest_str = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		dest_str[i] = src_str[i];
		i++;
	}
	return (dest);
}

// int main () {
//    const char src[50] = "";
//    char dest[50];
//    strcpy(dest,"a");
//    printf("Before memcpy dest = %s\n", dest);
//    ft_memcpy(dest, src, 2);
//    printf("After memcpy dest = %s\n", dest);
//    return(0);
// }