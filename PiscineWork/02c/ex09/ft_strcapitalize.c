/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:44:16 by myakoven          #+#    #+#             */
/*   Updated: 2023/07/31 22:58:42 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	p;

	i = 0;
	if (str[i] >= 32 && str[i] <= 126)
	{
		while (str[i] != 0)
		{
			p = str[i - 1];
			if (i == 0 || p < '0' || p > 'z' || (p > 'Z' && p < 'a'))
			{
				if (str[i] > 96 && str[i] < 123)
					ft_putchar(str[i] - 32);
				else
					ft_putchar(str[i]);
			}
			else if (((p >= 'A' && p <= 'Z') || (p >= 'a' && p <= 'z')) 
				&& (str[i] >= 'A' && str[i] < 'Z'))
				ft_putchar(str[i] + 32);
			else
				ft_putchar(str[i]);
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	ft_strcapitalize("saLut, commBnt tu vas ? 
	42mots quarante-Deux; cinquante+et+un");
}
*/
