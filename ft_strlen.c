#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l] != 0)
		l++;
	return (l);
}
// int main()
// {
//     char a[20]="Programing";
//     char b[20]={'P','r','o','g','r','a','m','i','\0'};

//     // using the %zu format specifier to print size_t
//     printf("Length of string a = %d \n",ft_strlen(a));
//     printf("Length of string b = %d \n",ft_strlen(b));

//     return 0;
// }