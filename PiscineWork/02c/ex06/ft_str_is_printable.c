/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:24:03 by myakoven          #+#    #+#             */
/*   Updated: 2023/07/31 18:19:18 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	printf("Uppercase only returns: %i\n", ft_str_is_printable("\n\102"));
	printf("With a number: %i\n", ft_str_is_printable("ajkf5jk\x7f"));
	printf("With an uppercase: %i\n", ft_str_is_printable("aAkfAjk"));
}
*/
