/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsafad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:15:56 by malsafad          #+#    #+#             */
/*   Updated: 2025/06/17 17:15:58 by malsafad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// // Функция для вывода информации о символе и его индексе
// void print_char_info(unsigned int index, char *c)
// {
//     printf("Character at index %u: %c\n", index, *c);
// }

// int main()
// {
//     char str[] = "Hello";

//     printf("Original string: %s\n", str);

//     // Применяем функцию print_char_info к каждому символу строки str
//     ft_striteri(str, print_char_info);

//     printf("Modified string: %s\n", str); 
// Строка не изменяется в этом примере

//     return 0;
// }
