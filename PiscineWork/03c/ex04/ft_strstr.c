/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:53:28 by myakoven          #+#    #+#             */
/*   Updated: 2023/08/02 16:32:06 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != 0)
	{
		j = 0;
		while (str[i + j] != 0 && str[j] != 0 && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	*str;
	char	*to_find;

	str = "Bonjour les chacaux";
	to_find = "lles";
	printf("1  %s\n", ft_strstr(str, to_find));
	printf("   %s\n", strstr(str, to_find));
	to_find = "";
	printf("2  %s\n", ft_strstr(str, to_find));
	printf("   %s\n", strstr(str, to_find));
	to_find = "onj\0";
	printf("3  %s\n", ft_strstr(str, to_find));
	printf("   %s\n", strstr(str, to_find));
	to_find = "l";
	printf("4  %s\n", ft_strstr(str, to_find));
	printf("   %s\n", strstr(str, to_find));
	to_find = "x";
	printf("5  %s\n", ft_strstr(str, to_find));
	printf("   %s\n", strstr(str, to_find));
}
*/
