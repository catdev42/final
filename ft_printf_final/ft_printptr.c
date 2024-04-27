/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 20:24:14 by myakoven          #+#    #+#             */
/*   Updated: 2024/01/04 18:12:34 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
*/
#include "ft_printf.h"

void	ft_print_it(uintptr_t address);

int	ft_printptr(uintptr_t address)
{
	int	count;

	count = 0;
	if (address == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	ft_print_it(address);
	while (address > 0)
	{
		address = address / 16;
		count++;
	}
	return (count + 2);
}

void	ft_print_it(uintptr_t address)
{
	while (address > 15)
	{
		ft_print_it(address / 16);
		address = address % 16;
	}
	if (address <= 9)
		ft_putchar_fd((address + '0'), 1);
	if (address > 9)
		ft_putchar_fd((address + 'a' - 10), 1);
}

/*
#include <stdio.h>
int	main(void)
{
    printf("chars in 143 as hex: %i", ft_printptr(143));
}
*/
