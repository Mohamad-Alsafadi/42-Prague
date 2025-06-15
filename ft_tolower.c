#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_tolower(char a)
{
	char	res;

	if ((a >= 65) && (a <= 90))
	{
		res = a - 'A' + 'a';
		return (res);
	}
	return (a);
}

// int main()
// {
// 	char ch;

// 	ch = '3';
// 	printf("%c in uppercase is represented as %c\n",
// 		ch, tolower(ch));
//     ch = '3';
// 	printf("%c in uppercase is represented as %c\n",
// 		ch, ft_tolower(ch));

// 	return 0;
// }