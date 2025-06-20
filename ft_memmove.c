#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

// int main(){
//   char a[]="tete pipi tete";

//   char b[]="hare rama hare";

//   ft_memmove(&a,&b,4);
//   puts(a);
//   puts(b);

//   memcpy(&a,&b,4);
//   puts(a);
//   puts(b);
// }