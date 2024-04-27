/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:38:47 by myakoven          #+#    #+#             */
/*   Updated: 2023/08/10 19:14:50 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	//while (dest[i] != 0)
	//{
	//	i++;
	//}
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

#include <stdio.h>
int main(void)
{
    char    array[30] = "abc";

printf("%s\n", array);

    ft_strcat(array, "defgh ");
    ft_strcat(array, "i like you");
    ft_strcat(array, "!!!");

    printf("%s\n", array);
}
