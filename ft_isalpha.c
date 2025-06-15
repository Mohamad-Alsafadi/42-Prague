#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int main()
// {
//     char c;
//     c = 'k';
//     printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));
//     printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

//     c = 'H';
//     printf("\nResult when lowercase alphabet is passed: %d", isalpha(c));
//     printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

//     c='+';
//     printf("\nResult when non-alphabetic is passed: %d", isalpha(c));
//     printf("\nResult when non-alphabetic is passed: %d\n", isalpha(c));
//     return 0;
// }