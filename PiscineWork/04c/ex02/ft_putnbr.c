/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:23:00 by myakoven          #+#    #+#             */
/*   Updated: 2023/08/08 20:18:44 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	nb = nb % 10;
	if (nb < 10)
		ft_putchar(nb + '0');
}
/*
int	main(void)
{
	ft_putnbr(123456789);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
        ft_putnbr(2147483647);
        write(1, "\n", 1);

}
*/
