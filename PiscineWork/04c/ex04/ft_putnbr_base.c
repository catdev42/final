/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:49:34 by myakoven          #+#    #+#             */
/*   Updated: 2023/08/08 20:18:37 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkbase(char *base, int len)
{
	int		i;
	int		j;
	char	t;

	if (len < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		t = base[i];
		if (t == '-' || t == '+' || t == ' ' || (t >= 9 && t <= 13))
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;
	int			baselen;

	baselen = ft_strlen(base);
	nb = nbr;
	if (!checkbase(base, baselen))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= baselen)
		ft_putnbr_base(nb / baselen, base);
	nb = nb % baselen;
	if (nb < baselen)
		ft_putchar(base[nb]);
}
/*
int	main(int argc, char *argv[])
{
	int	i;
	int	num;

	if (argc != 3)
	{
		write(1, "write a number and a valid base", 1);
		return (1);
	}
	else
	{
		i = 0;
		num = 0;
		while (argv[1][i] != 0)
		{
			if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
			{
				write(1, "write a number and a valid base", 1);
				return (1);
			}
			num = num*10+(argv[1][i]-'0');
			i++;
		}
		//char strbase[] = "";
		ft_putnbr_base(num, argv[2]);
	}
}
*/
