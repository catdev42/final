/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:45:28 by myakoven          #+#    #+#             */
/*   Updated: 2023/08/03 22:58:14 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	
	while (*src != 0)
	{
		*dest =  *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	text[] = "Hello, Evaluator!";
	int     i;

	i = 0;
	while (text[i] != 0)
	{
	i++;
	}
	//2 extra spaces for null character and check character
	i = i + 2;
	
	char    textCopy[i];
	
	ft_strcpy(textCopy, text);
	printf("Source: %s\n", text);
	printf("Destination: %s\n", textCopy);
}
