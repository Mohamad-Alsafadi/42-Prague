#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	int				j;

	j = 0;
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] && i < len)
		{
			i++;
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}
//  int main () {
//     const char haystack[20] = "TutorialsPoint";
//     const char needle[10] = "";
//     char *result;
//     result = ft_strnstr(haystack, needle, 3);
//     printf("The substring is: %s\n", result);
//     return(0);
// }