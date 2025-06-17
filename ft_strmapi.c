/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsafad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:18:17 by malsafad          #+#    #+#             */
/*   Updated: 2025/06/17 17:20:15 by malsafad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = (char *)malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// char to_uppercase(unsigned int i, char c)
// {
// 	if(!c)
// 	{
// 		return (i * 0);
// 	}
//     if (c >= 'a' && c <= 'z')
//         return (c - 32);
//     return (c);
// }

// char add_index(unsigned int index, char c)
// {
//     return (c + index);
// }

// int main()
// {
//     char *str;
//     char *result;

//     str = "hello world";
//     result = ft_strmapi(str, to_uppercase);
//     if (result)
//     {
//         printf("Original: %s\nModified: %s\n", str, result);
//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed\n");
//     }

//     str = "abcdef";
//     result = ft_strmapi(str, add_index);
//     if (result)
//     {
//         printf("Original: %s\nModified: %s\n", str, result);
//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed\n");
//     }

//     return 0;
// }
