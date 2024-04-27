/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:58:35 by myakoven          #+#    #+#             */
/*   Updated: 2023/07/27 17:17:14 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	if (*b != 0)
	{
		c = *a;
		*a = *a / *b;
		*b = c % *b;
	}
	else
		write(1, "can't div by zero\n", 18);
}
/*
#include <stdio.h>

int main(void)
{
        int i = 4;
        int j = 0;
        
	ft_ultimate_div_mod(&i, &j);
        if (j != 0)
        	printf("%i\n%i\n", i, j);
}
*/
