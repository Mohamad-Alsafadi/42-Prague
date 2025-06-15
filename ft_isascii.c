#include "libft.h"

int	ft_isascii(int i)
{
	if (i < 0 || i > 127)
		return (0);
	return (1);
}

// int main( void )
// {
//     printf("%d\n", ft_iscii('s'));
//     printf("%d\n", ft_iscii('b'));
//     printf("%d\n", ft_iscii(0x70));
//     printf("%d\n", isascii(0x70));
//     printf("%d\n", isascii(0x80));
//     printf("%d\n", isascii(0x80));
// }