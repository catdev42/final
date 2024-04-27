/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:59:32 by myakoven          #+#    #+#             */
/*   Updated: 2023/07/31 23:01:05 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char	*text = "Evaluation Master!!!";
	char	textNew[40];
	ft_strncpy(textNew, text, 10);
	printf("Source: %s\n", text); // Source: original text
	printf("Destination: %s\n", textNew); // Output: not necessarily nul terminated
	return (0);
}
*/
