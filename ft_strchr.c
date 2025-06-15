#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&((char *)s)[i]);
	return (0);
}

// int main () {
//    const char str[] = "https://www.tutorialspoint.com";
//    const char ch = 't';
//    char *ret;

//    ret = strchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);

//     const char chr = 't';
//    char *reth;

//    reth = strchr(str, chr);

//    printf("String after |%c| is - |%s|\n", chr, reth);
//    return(0);
// }