/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:17:10 by myakoven          #+#    #+#             */
/*   Updated: 2023/07/27 17:17:36 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		write(1, "Can't divide by zero!", 21);
	}
}
/*
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 4;
	j = 0;
	if (j != 0)
	{
		ft_div_mod(i, j, &i, &j);
		printf("%i\n", i);
		printf("%i\n", j);
	}
	else 
		write(1, "Can't divide by zero!", 21);
	return (0);
}
*/
