/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:36:59 by myakoven          #+#    #+#             */
/*   Updated: 2023/08/03 23:03:02 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main(void)

{
    char    *textOne = "IHelilo";
    char    *textTwo = "Hello!";
    int i;

    i = ft_strncmp(textOne, textTwo, 1);
    
    printf("output of ft strcmp: %i\n", i);


    if (i == 0)
    {
        printf("these are the same");
    }
    else if (i < 0)
    {
        printf("the second text is more than first");
    }
    else if (i > 0)
    {
        printf("the first text is more than second");
    }
}
*/
