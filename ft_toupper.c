#include <stdio.h>
#include "libft.h"

int	ft_toupper(char a)
{
	char	res;

	if ((a >= 97) && (a <= 122))
	{
		res = a + 'A' - 'a';
		return (res);
	}
	return (a);
}