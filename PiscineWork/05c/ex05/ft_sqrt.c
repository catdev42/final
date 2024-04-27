/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:53:29 by myakoven          #+#    #+#             */
/*   Updated: 2023/08/09 18:37:24 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	if (nb / 2 > 46340)
		i = 46340;
	else
		i = nb / 2;
	while (i * i > nb && i >= 0)
		i = i / 2;
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb && nb % i == 0 && i <= 46340)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_sqrt(36));
}
 */