/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:20:51 by myakoven          #+#    #+#             */
/*   Updated: 2023/07/31 23:03:47 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	printf("Uppercase only returns: %i\n", ft_str_is_uppercase("ASDASD"));
	printf("With a number: %i\n", ft_str_is_uppercase("ajkf5jk"));
	printf("With an uppercase: %i\n", ft_str_is_uppercase("aAkfAjk"));

}
*/
