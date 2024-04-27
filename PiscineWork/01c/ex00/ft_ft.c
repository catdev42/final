/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:33:41 by myakoven          #+#    #+#             */
/*   Updated: 2023/07/31 20:22:29 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr, int number)
{
	*nbr = *nbr * number;
}

#include <stdio.h>

int main(void)
{
	int c;

	c = 3;
	printf("%i\n", c);
	ft_ft(&c, 5);
	printf("%i\n", c);

}
