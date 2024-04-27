/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:25:23 by myakoven          #+#    #+#             */
/*   Updated: 2023/08/10 22:42:53 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	else
		return (0);
}

#include <stdio.h>

int	main(void)
{
	int i = 0;
	while (i < 20)
	{
	printf("%i (%i) ", ft_fibonacci(i), i);
	i++;
	}
}

