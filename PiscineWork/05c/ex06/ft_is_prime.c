/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:13:34 by myakoven          #+#    #+#             */
/*   Updated: 2023/08/09 18:39:28 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	if (nb > 7 && nb % 2 && nb % 3 && nb % 5 && nb % 7)
		return (1);
	else if (nb == 3 || nb == 5 || nb == 7 || nb == 2)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	num;

	if (argc == 1)
	{
		printf("please write one number to check");
		return (1);
	}
	if (argc != 2)
	{
		printf("please write one number to check");
		return (1);
	}
	i = 0;
	num = 0;
	while (argv[1][i])
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		{
			printf("please only write positive integers");
			return (1);
		}
		num = num * 10 + argv[1][i] - '0';
		i++;
	}
	printf("output 1 means prime, 0 means not prime: %i\n", ft_is_prime(num));
	// printf("output 1 means prime, 0 means not prime: %i\n",
	// ft_is_prime(200));
}
*/