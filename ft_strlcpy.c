#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

// int main() {
//     char src[] = "Hello, World";
//     char dst[0] = "";

//     size_t result = ft_strlcpy_(dst, src, sizeof(dst));

//     printf("Copied string: %s\n", dst);
//     printf("Length of source: %zu\n", result);

//     return 0;
// }