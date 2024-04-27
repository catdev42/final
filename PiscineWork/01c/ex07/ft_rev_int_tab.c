/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:21:13 by myakoven          #+#    #+#             */
/*   Updated: 2023/07/27 16:57:34 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	hold;

	i = 0;
	while (i <= size / 2)
	{
		hold = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = hold;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8};
	int	size = 8;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		printf("%i", numbers[i]);
		i++;
	}
	ft_rev_int_tab(numbers, size);
	j = 0;
	while (j < size)
	{
		printf("%i", numbers[j]);
		j++;
	}
}
*/
