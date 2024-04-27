/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:28:47 by myakoven          #+#    #+#             */
/*   Updated: 2023/08/03 22:48:19 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    *textOne = "Hello";
    char    *textTwo = "Hello!";
    int i;

    i = ft_strcmp(textOne, textTwo);
    
    printf("output of ft strcmp: %i\n", i);
    printf("output of string.h : %i\n", strcmp(textOne, textTwo));


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
