/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:18:00 by myakoven          #+#    #+#             */
/*   Updated: 2023/07/31 23:03:06 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
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
	printf("Lowercase only returns: %i\n", ft_str_is_lowercase("akdjfh"));
	printf("With a number: %i\n", ft_str_is_lowercase("ajkf5jk"));
	printf("With an uppercase: %i\n", ft_str_is_lowercase("ajkfAjk"));

}
*/
